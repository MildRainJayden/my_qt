#ifndef KEYBOARDDIALOG_H
#define KEYBOARDDIALOG_H

#include <QDialog>
#include <QKeyEvent>

namespace Ui {
class KeyboardDialog;
}

class KeyboardDialog : public QDialog
{
    Q_OBJECT

public:
    explicit KeyboardDialog(QWidget *parent = 0);
    ~KeyboardDialog();
    //按下
    void keyPressEvent(QKeyEvent*);

private:
    Ui::KeyboardDialog *ui;
};

#endif // KEYBOARDDIALOG_H
