#ifndef STUDENTDIALOG_H
#define STUDENTDIALOG_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlError>
#include <QDebug>
#include <QMessageBox>

namespace Ui {
class StudentDialog;
}

class StudentDialog : public QDialog
{
    Q_OBJECT

public:
    explicit StudentDialog(QWidget *parent = 0);
    ~StudentDialog();
private:
    //创建数据库
    void createDB();
    //创建数据表
    void createTable();
    //查询
    void queryTable();
private slots:
    //插入按钮对应的槽函数
    void on_insertButton_clicked();
    //删除按钮对应的槽函数
    void on_deleteButton_clicked();
    //修改按钮对应的槽函数
    void on_updateButton_clicked();
    //排序按钮对应的槽函数
    void on_sortButton_clicked();

private:
    Ui::StudentDialog *ui;
    QSqlDatabase db;//建立qt和数据库连接
    QSqlQueryModel model;//保存结果集
};

#endif // STUDENTDIALOG_H
