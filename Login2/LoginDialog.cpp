#include "LoginDialog.h"
//构造函数
LoginDialog::LoginDialog(void):ui(new Ui::Dialog)
{
    //界面初始化
    ui->setupUi(this);
    //信号和槽的连接
    //点击ok发送信号accepted
    connect(ui->m_btnBox,SIGNAL(accepted(void)),
            this,SLOT(onAccepted(void)));
    //点击cancel发送信号rejected
    connect(ui->m_btnBox,SIGNAL(rejected(void)),
            this,SLOT(onRejected(void)));
}
LoginDialog::~LoginDialog(void){
    delete ui;
}
//处理ok按钮的槽函数
void LoginDialog::onAccepted(void)
{
    //jayden/123456:提示登录成功,否则失败
    if(ui->m_usernameEdit->text() == "jayden" &&
           ui-> m_passwordEdit->text() == "123456"){
        qDebug() << "登录成功";
        close();//关闭登录成功
    }
    else{
        QMessageBox msgBox(
                QMessageBox::Critical,//图标
                "Error",//标题
                "用户名或密码错误",//提示消息
                QMessageBox::Ok,//按钮
                this);//父窗口
        //显示消息提示框,并进入事件循环
        msgBox.exec();
    }
}
//处理cancel按钮的槽函数
void LoginDialog::onRejected(void)
{
    QMessageBox msgBox(
            QMessageBox::Question,
            "登录",
            "是否确定取消登录?",
            QMessageBox::Yes|QMessageBox::No,
            this);
    //显示消息提示框,并进入事件循环,点击Yes或No时候都会退出时间循环
    //但是返回结果不同,如果点击Yes则退出登录对话框
    if(msgBox.exec() == QMessageBox::Yes){
        close();
    }
}
