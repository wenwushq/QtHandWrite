#ifndef HANDINPUTFORM_H
#define HANDINPUTFORM_H

#include <QFrame>
#include <QLibrary>

typedef void(*BstrResults)(char* getString);

typedef bool (*Init)(long inputWinId);
typedef void (*Clear)();
typedef void (*SetBstrResultsCB)(BstrResults pBstrResults);

namespace Ui {
class HandInputForm;
}

class HandInputForm : public QFrame
{
    Q_OBJECT

public:
    explicit HandInputForm(int kbBtnWidth,int kbBtnHeight,QWidget *parent = nullptr);
    ~HandInputForm();

    static void bstrResultsSlot(char* getString);

    void clear();

signals:
    void bstrResultsSig(QString getString);
    void switchLanguageSig(int inputMode);
    void hideSig();
    void clearSig();
    void backspaceSig();
private slots:
    void on_pushButton_pinyin_clicked();

    void on_pushButton_letter_clicked();

    void on_pushButton_number_clicked();

    void on_pushButton_clear_clicked();

    void on_pushButton_hide_clicked();

    void on_pushButton_backspace_clicked();

private:
    static HandInputForm *m_self;
    Ui::HandInputForm *ui;
    Init m_init;
    Clear m_clear;
    SetBstrResultsCB m_setBstrResultsCB;
    int keyboard_btn_width;
    int keyboard_btn_height;
};

#endif // HANDINPUTFORM_H
