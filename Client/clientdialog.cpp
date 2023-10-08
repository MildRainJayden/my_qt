#include "clientdialog.h"
#include "ui_clientdialog.h"

ClientDialog::ClientDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ClientDialog)
{
    ui->setupUi(this);
    status = false;//离线
    connect(&tcpsocket,SIGNAL(connected()),this,SLOT(onConnected()));
    connect(&tcpsocket,SIGNAL(disconnected()),this,SLOT(onDisconnected()));
    connect(&tcpsocket,SIGNAL(readyRead()),this,SLOT(onReadyread()));
    connect(&tcpsocket,SIGNAL(error(QAbstractSocket::SocketError)),this,SLOT(onError()));
}

ClientDialog::~ClientDialog()
{
    delete ui;
}
//发送按钮对应的槽函数
void ClientDialog::on_sendButton_clicked()
{
    //获取用户输入的聊天消息
    QString msg = ui->messageEdit->text();
    if(msg == ""){
        return;
    }
    msg = username+":"+msg;
    //发送聊天消息
    tcpsocket.write(msg.toUtf8());
    //清空消息输入框
    ui->messageEdit->clear();
}
//连接服务器按钮对应的槽函数
void ClientDialog::on_connectButton_clicked()
{
    //如果当前是离线状态,则建立和服务器连接
    if(status == false){
        //获取服务器ip
        serverIP.setAddress( ui->serveripEdit->text());
        //获取服务器端口
        serverPort = ui->serverportEdit->text().toShort();
        //获取聊天室昵称
        username = ui->usernameEdit->text();
        //向服务器发送连接请求
        //成功发送信号:connected
        //失败发送信号:error
        tcpsocket.connectToHost(serverIP,serverPort);
    }
    //如果当前是在线状态,则断开和服务器连接
    else{
        //向服务器发送离开聊天室的提示消息
        QString msg = username+":离开了聊天室";
        tcpsocket.write(msg.toUtf8());
        //关闭和服务器连接,同时发送信号:disconnected
        tcpsocket.disconnectFromHost();
    }
}
//和服务器连接成功时执行的槽函数
void ClientDialog::onConnected()
{
    status = true;//在线
    ui->sendButton->setEnabled(true);//恢复按钮状态
    ui->serveripEdit->setEnabled(false);//禁用IP
    ui->serverportEdit->setEnabled(false);//禁用port
    ui->usernameEdit->setEnabled(false);//禁用昵称
    ui->connectButton->setText("离开聊天室");

    //向服务器发送进入聊天室提示消息
    QString msg = username + "进入了聊天室";
    //toUtf8:QString转换QByteArray
    tcpsocket.write(msg.toUtf8());
}

//和服务器断开连接时执行的槽函数
void ClientDialog::onDisconnected()
{
    status = false;//离线
    ui->sendButton->setEnabled(false);//禁用按钮状态
    ui->serveripEdit->setEnabled(true);//恢复IP
    ui->serverportEdit->setEnabled(true);//恢复port
    ui->usernameEdit->setEnabled(true);//恢复昵称
    ui->connectButton->setText("连接服务器");

}

//接受聊天消息的槽函数
void ClientDialog::onReadyread()
{
    if(tcpsocket.bytesAvailable()){
        //接收消息
        QByteArray buf = tcpsocket.readAll();
        //显示消息
        ui->listWidget->addItem(buf);
        ui->listWidget->scrollToBottom();
    }
}

//网络异常执行的槽函数
void ClientDialog::onError()
{
    //errorString():获取网络异常的原因
    QMessageBox::critical(this,"ERROR",tcpsocket.errorString());
}
