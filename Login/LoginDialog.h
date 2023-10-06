#ifndef __LOGINDIALOG_H
#define __LOGINDIALOG_H

#include "ui_LoginDialog.h"
#include <QMessageBox>//消息提示框
#include <QDebug>//打印提示

class LoginDialog:public QDialog,public Ui::Dialog{
    Q_OBJECT//moc
public:
    LoginDialog(void);
public slots:
    //处理ok按钮的槽函数
    void onAccepted(void);
    //处理cancel按钮的槽函数
    void onRejected(void);
};


#endif//__LOGINDIALOG_H
