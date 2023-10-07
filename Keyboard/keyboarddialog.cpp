#include "keyboarddialog.h"
#include "ui_keyboarddialog.h"

KeyboardDialog::KeyboardDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::KeyboardDialog)
{
    ui->setupUi(this);
}

KeyboardDialog::~KeyboardDialog()
{
    delete ui;
}
//按下
void KeyboardDialog::keyPressEvent(QKeyEvent* event){
    int x = ui->label->pos().x();
    int y = ui->label->pos().y();
    if(event->key() == Qt::Key_Up){
        ui->label->move(x,y-10);
    }
    else if(event->key() == Qt::Key_Down){
        ui->label->move(x,y+10);
    }
    else if(event->key() == Qt::Key_Left){
        ui->label->move(x-10,y);
    }
    else if(event->key() == Qt::Key_Right){
        ui->label->move(x+10,y);
    }
}
