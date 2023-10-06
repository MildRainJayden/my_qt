#ifndef __LOGINDIALOG_H
#define __LOGINDIALOG_H

#include "ui_LoginDialog.h"
#include <QMessageBox>//消息提示框
#include <QDebug>//打印提示

class LoginDialog:public QDialog{
    Q_OBJECT//moc
public:
    LoginDialog(void);
    ~LoginDialog(void);
public slots:
    //处理ok按钮的槽函数
    void onAccepted(void);
    //处理cancel按钮的槽函数
    void onRejected(void);
private:
    Ui::Dialog* ui;
};


#endif//__LOGINDIALOG_H
