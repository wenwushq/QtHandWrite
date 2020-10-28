#include "cqdlcplatforminputcontext.h"
#include <QCoreApplication>
#include <QKeyEvent>
#include <QApplication>
#include <QDesktopWidget>
#include <QMessageBox>

CqdlcPlatformInputContext::CqdlcPlatformInputContext()
{
    isSendKey = false;
    m_focusitem = nullptr;
    m_keyboard = new KeyboardForm;
    connect(m_keyboard, &KeyboardForm::sendKeyToFocusItem, this, &CqdlcPlatformInputContext::sendKeyToFocusItem);
}

CqdlcPlatformInputContext::~CqdlcPlatformInputContext()
{
    if(m_keyboard) delete m_keyboard;
}

void CqdlcPlatformInputContext::sendKeyToFocusItem(const QString &keytext)
{
    if(!m_focusitem)return;

    isSendKey = true;
    if(keytext == QString("\x7F"))     //Backspace <--
    {
        QCoreApplication::sendEvent(m_focusitem, new QKeyEvent(QEvent::KeyPress, Qt::Key_Backspace, Qt::NoModifier));
        QCoreApplication::sendEvent(m_focusitem, new QKeyEvent(QEvent::KeyRelease, Qt::Key_Backspace, Qt::NoModifier));
    }
    else if(keytext == QString("\n"))
    {
        QCoreApplication::sendEvent(m_focusitem, new QKeyEvent(QEvent::KeyPress, Qt::Key_Return, Qt::NoModifier));
        QCoreApplication::sendEvent(m_focusitem, new QKeyEvent(QEvent::KeyRelease, Qt::Key_Return, Qt::NoModifier));
    }
    else if(keytext == QString("&&"))
    {
        QCoreApplication::sendEvent(m_focusitem, new QKeyEvent(QEvent::KeyPress, 0, Qt::NoModifier, "&"));
        QCoreApplication::sendEvent(m_focusitem, new QKeyEvent(QEvent::KeyRelease, 0, Qt::NoModifier, "&"));
    }
    else
    {
        QCoreApplication::sendEvent(m_focusitem, new QKeyEvent(QEvent::KeyPress, 0, Qt::NoModifier, keytext));
        QCoreApplication::sendEvent(m_focusitem, new QKeyEvent(QEvent::KeyRelease, 0, Qt::NoModifier, keytext));
    }
    isSendKey = false;
}

bool CqdlcPlatformInputContext::isValid() const
{
    return true;
}

void CqdlcPlatformInputContext::setFocusObject(QObject *object)
{
    m_focusitem = object;

    if(m_focusitem){
        // 查询是否有焦点控件是否需要输入法
        QInputMethodQueryEvent imEvent(Qt::ImQueryInput | Qt::ImEnabled);
        QGuiApplication::sendEvent(m_focusitem, &imEvent);
        bool isImEnabled  = imEvent.value(Qt::ImEnabled).toBool();
        if(isImEnabled){
            m_focusitem->installEventFilter(this);
        }
    }
}

void CqdlcPlatformInputContext::showInputPanel()
{
    if(m_keyboard->isHidden()){m_keyboard->raise();m_keyboard->show();}
	if (m_focusitem)
	{//更改键盘的显示位置，在控件的正下方显示
		QWidget* pWidget = qobject_cast<QWidget*>(m_focusitem);
		if (pWidget)
		{
			QRect rcItem = pWidget->rect();
			QPoint ptPos = pWidget->mapToGlobal(pWidget->pos());
			int nLeft = ptPos.x() + rcItem.center().x() - m_keyboard->width() / 2;
			nLeft = nLeft > 0 ? nLeft : 0;
			if (nLeft + m_keyboard->width() > qApp->desktop()->width())
				nLeft = qApp->desktop()->width() - m_keyboard->width();
			int nTop = ptPos.y() + rcItem.bottom();
			nTop = (qApp->desktop()->height() - nTop) > m_keyboard->height() ? nTop : qApp->desktop()->height() - m_keyboard->height();
			m_keyboard->move(nLeft, nTop);
		}
	}else
		m_keyboard->move(0, qApp->desktop()->height() - m_keyboard->height());

    emitInputPanelVisibleChanged();
}

void CqdlcPlatformInputContext::hideInputPanel()
{
    if(!m_keyboard->isHidden())m_keyboard->hide();
    m_keyboard->clearChineseCache();

    emitInputPanelVisibleChanged();
}

bool CqdlcPlatformInputContext::isInputPanelVisible() const
{
    return m_keyboard->isVisible();
}

bool CqdlcPlatformInputContext::eventFilter(QObject *watched, QEvent *event)
{
    if(event->type() == QEvent::KeyPress)
    {
        if(!isInputPanelVisible())
        {
            showInputPanel();
        }
        if(isSendKey)
        {
            watched->event(event);
            return true;
        }

        event->ignore();
        QKeyEvent *keyEvent = static_cast<QKeyEvent *>(event);
        m_keyboard->setKeyPressEvent(keyEvent);

        return true;
    }

    watched->event(event);
    return false;
}
