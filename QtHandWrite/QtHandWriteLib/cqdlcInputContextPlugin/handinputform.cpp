#include "handinputform.h"
#include "ui_handinputform.h"
#include <QMouseEvent>
#include <QDebug>
#include <QTextCodec>
#include <QWidget>
#include <QFontDatabase>

HandInputForm *HandInputForm::m_self = nullptr;

HandInputForm::HandInputForm(int kbBtnWidth, int kbBtnHeight, QWidget *parent) :
    QFrame(parent),
    ui(new Ui::HandInputForm)
  , m_init(nullptr)
  , m_clear(nullptr)
  , m_setBstrResultsCB(nullptr)
  , keyboard_btn_width(kbBtnWidth)
  , keyboard_btn_height(kbBtnHeight)
{
    ui->setupUi(this);

    m_self = this;

    //设置主窗体样式
//    this->setAttribute(Qt::WA_TranslucentBackground);
    this->setWindowFlags(windowFlags() | \
                         Qt::Tool | \
                         Qt::FramelessWindowHint | \
                         Qt::WindowStaysOnTopHint | \
                         Qt::WindowDoesNotAcceptFocus);

    ui->input_widget->setShape(PaintArea::None);
    ui->input_widget->setPenStyle(Qt::SolidLine);
    ui->input_widget->setPenColor(Qt::white);
    ui->input_widget->setPenWidth(4);
    ui->input_widget->setImageColor(QColor(28,28,28));

    //图标字体
    int fontId = QFontDatabase::addApplicationFont(":/font/res/FontAwesome.otf");
    QString fontName = QFontDatabase::applicationFontFamilies(fontId).at(0);
    QFont btnicofont(fontName);
    btnicofont.setPixelSize(10);

    ui->pushButton_clear->setText(QChar(0xf01e));
    ui->pushButton_clear->setFixedSize(keyboard_btn_width*1.5, keyboard_btn_height);
    ui->pushButton_clear->setFont(btnicofont);
    ui->pushButton_clear->setObjectName("function_button");

    ui->pushButton_backspace->setText(QChar(0xf060));
    ui->pushButton_backspace->setObjectName("function_button");
    ui->pushButton_backspace->setFont(btnicofont);
    ui->pushButton_backspace->setFixedSize(keyboard_btn_width*1.5, keyboard_btn_height);

    ui->pushButton_hide->setText(QString(QChar(0xf11c)).append(QChar(0xf103)));
    ui->pushButton_hide->setFixedSize(keyboard_btn_width*1.5, keyboard_btn_height);
    ui->pushButton_hide->setFont(btnicofont);
    ui->pushButton_hide->setObjectName("function_button");

    ui->pushButton_number->setText(".?123");
    ui->pushButton_number->setFixedSize(keyboard_btn_width, keyboard_btn_height);
    ui->pushButton_number->setObjectName("function_button");

    ui->pushButton_pinyin->setFixedSize(keyboard_btn_width, keyboard_btn_height);
    ui->pushButton_pinyin->setObjectName("function_button");

    ui->pushButton_letter->setFixedSize(keyboard_btn_width, keyboard_btn_height);
    ui->pushButton_letter->setObjectName("function_button");

    QLibrary mylib("handinput.dll");
    if(mylib.load())
    {
        m_init = (Init)mylib.resolve("Init");
        m_clear = (Clear)mylib.resolve("Clear");
        m_setBstrResultsCB = (SetBstrResultsCB)mylib.resolve("SetBstrResultsCB");

        if(m_init)
        {
            m_init(static_cast<long>(ui->input_widget->winId()));

            if(m_setBstrResultsCB)
            {
                m_setBstrResultsCB(bstrResultsSlot);
            }
        }
	}
}

HandInputForm::~HandInputForm()
{
    delete ui;
}

void HandInputForm::clear()
{
    ui->input_widget->doClear();
    if(m_clear)
    {
        m_clear();
    }
    emit clearSig();
}

void HandInputForm::on_pushButton_pinyin_clicked()
{
    clear();
    emit switchLanguageSig(0);
}

void HandInputForm::on_pushButton_letter_clicked()
{
    clear();
    emit switchLanguageSig(1);
}

void HandInputForm::on_pushButton_number_clicked()
{
    clear();
    emit switchLanguageSig(3);
}

void HandInputForm::on_pushButton_clear_clicked()
{
    clear();
}

void HandInputForm::on_pushButton_hide_clicked()
{
    clear();
    emit hideSig();
}

void HandInputForm::bstrResultsSlot(char *getString)
{
    QTextCodec *pTextCodecGB = QTextCodec::codecForName("GB18030");
    QString fileStr = pTextCodecGB->toUnicode(getString);

    emit m_self->bstrResultsSig(fileStr);
}

void HandInputForm::on_pushButton_backspace_clicked()
{
    emit backspaceSig();
}
