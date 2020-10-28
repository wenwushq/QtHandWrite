#ifndef KEYBOARDFORM_H
#define KEYBOARDFORM_H

#include <QWidget>
class QPushButton;
class QLabel;
class Widget;
class HandInputForm;

class KeyboardForm : public QWidget
{
    Q_OBJECT

public:
    KeyboardForm(QWidget *parent = 0);
    void clearChineseCache();

    void setKeyPressEvent(QKeyEvent *event);

private:
    void chineseCharactersUpdatePrevious();
    void chineseCharactersUpdateNext();
    void chineseCharactersSelected();
    void btnBackspaceClicked();
    void btnEnterClicked();
    void btnUpperClicked();
    void btnSymbolsClicked();
    void btnLanguageClicked();
    void btnHandInputClicked();
    void btnBlankspaceClicked();
    void btnEmojiClicked();
    void characterButtonClicked();
    void updateKeyboard();
    void updateButtonStateOfChineseCharacters();
    void searchChineseCharacters(const int &currentpage);
    void hideKeyboard();

    void hwBstrResultsSlot(QString getString);
    void hwClearSlot();
    void hwChineseCharacters(const int &currentpage, QString getString);

    QList<QPushButton*> character_btns_list, chinese_characters_list, change_chinese_characters_page_list;
    enum InputMode{zh, en, hw, symb};
    InputMode current_mode, last_mode;
    QWidget *widget_keyboard, *widget_pinyin;
    HandInputForm *widget_handwrite;
    bool upper_mode;
    QLabel *m_label_pinyin;
    int m_symbol_page;

    QPoint m_pressPos;
    bool isPosOnMoveArea;

signals:
    void sendKeyToFocusItem(const QString &keytext);

private slots:
    void switchLanguageSlot(int inputMode);

protected:
    void mousePressEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void showEvent(QShowEvent *event);
    void hideEvent(QHideEvent *event);

};

#endif // KEYBOARDFORM_H
