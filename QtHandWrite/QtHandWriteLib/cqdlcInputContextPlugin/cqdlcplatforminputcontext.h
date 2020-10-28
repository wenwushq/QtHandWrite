#ifndef CQDLCPLATFORMINPUTCONTEXT_H
#define CQDLCPLATFORMINPUTCONTEXT_H

#include <qpa/qplatforminputcontext.h>
#include "keyboardform.h"

class CqdlcPlatformInputContext : public QPlatformInputContext
{
    Q_OBJECT
public:
    CqdlcPlatformInputContext();
    ~CqdlcPlatformInputContext();

    bool isValid() const Q_DECL_OVERRIDE;
    void setFocusObject(QObject *object) Q_DECL_OVERRIDE;
    void showInputPanel() Q_DECL_OVERRIDE;
    void hideInputPanel() Q_DECL_OVERRIDE;
    bool isInputPanelVisible() const Q_DECL_OVERRIDE;

    bool eventFilter(QObject *watched, QEvent *event);
private:
    void sendKeyToFocusItem(const QString &keytext);

    KeyboardForm *m_keyboard;
    QObject *m_focusitem;

    bool isSendKey;
};

#endif // CQDLCPLATFORMINPUTCONTEXT_H
