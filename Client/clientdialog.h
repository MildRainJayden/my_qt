#ifndef CLIENTDIALOG_H
#define CLIENTDIALOG_H

#include <QDialog>
#include <QTcpSocket>
#include <QHostAddress>
#include <QMessageBox>
#include <QDebug>

namespace Ui {
class ClientDialog;
}

class ClientDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ClientDialog(QWidget *parent = 0);
    ~ClientDialog();

private slots:
    //发送按钮对应的槽函数
    void on_sendButton_clicked();
    //连接服务器按钮对应的槽函数
    void on_connectButton_clicked();
    //和服务器连接成功时执行的槽函数
    void onConnected();
    //和服务器断开连接时执行的槽函数
    void onDisconnected();
    //接受聊天消息的槽函数
    void onReadyread();
    //网络异常执行的槽函数
    void onError();
private:
    Ui::ClientDialog *ui;
    bool status;//表示状态:在线/离线
    QTcpSocket tcpsocket;//和服务器通信的套接字
    QHostAddress serverIP;//服务器地址
    qint16 serverPort;//服务器端口
    QString username;//聊天室昵称
};

#endif // CLIENTDIALOG_H
