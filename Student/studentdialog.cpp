#include "studentdialog.h"
#include "ui_studentdialog.h"

StudentDialog::StudentDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::StudentDialog)
{
    ui->setupUi(this);
    createDB();
    createTable();
    queryTable();
}

StudentDialog::~StudentDialog()
{
    delete ui;
}
//创建数据库
void StudentDialog::createDB()
{
    //添加数据库驱动库
    db = QSqlDatabase::addDatabase("QSQLITE");
    //设置数据库名字(文件名)
    db.setDatabaseName("student.db");
    //打开数据库
    if(db.open()==true){
        qDebug() << "创建/打开数据库成功!";
    }
    else{
        qDebug() << "创建/打开数据库失败!";
    }
}

//创建数据表
void StudentDialog::createTable()
{
    QSqlQuery query;
    QString str = QString("CREATE TABLE student("
                          "id INT PRIMARY KEY NOT NULL,"
                          "name TEXT NOT NULL,"
                          "score REAL NOT NULL)");
    if(query.exec(str) == false){
        qDebug()<<str;
    }
    else{
        qDebug()<<"创建数据表成功!";
    }
}

//查询
void StudentDialog::queryTable()
{
    QString str = QString("SELECT * FROM student");
    model.setQuery(str);
    ui->tableView->setModel(&model);
}

//插入按钮对应的槽函数
void StudentDialog::on_insertButton_clicked()
{
    QSqlQuery query;
    int id = ui->idEdit->text().toInt();
    if(id == 0){
        QMessageBox::critical(this,"Error","id输入错误!");
        return;
    }
    QString name = ui->nameEdit->text();
    if(name == ""){
        QMessageBox::critical(this,"Error","name输入错误!");
        return;
    }
    double score = ui->scoreEdit->text().toDouble();
    if(score > 100||score <0){
        QMessageBox::critical(this,"Error","score输入错误!");
        return;
    }
    QString str = QString("INSERT INTO student VALUES(%1,'%2',%3)").arg(id).arg(name).arg(score);
    if(query.exec(str)==false){
        qDebug()<<str;
    }
    else{
        qDebug()<<"插入数据成功!";
        queryTable();
    }
}
//删除按钮对应的槽函数:根据id删除一条数据
void StudentDialog::on_deleteButton_clicked()
{
    QSqlQuery query;
    int id = ui->idEdit->text().toInt();
    QString str = QString("DELETE FROM student WHERE id = %1").arg(id);
    if(QMessageBox::question(this,"删除","确定要删除吗?",QMessageBox::Yes|QMessageBox::No)==QMessageBox::No){
        return;
    }
    if(query.exec(str)==false){
        qDebug()<<str;
    }
    else{
        qDebug()<<"删除数据成功!";
        queryTable();
    }

}
//修改按钮对应的槽函数:根据id修改成绩
void StudentDialog::on_updateButton_clicked()
{
    QSqlQuery query;
    int id = ui->idEdit->text().toInt();
    double score = ui->scoreEdit->text().toDouble();
    QString str = QString("UPDATE student SET score=%1 WHERE id = %2").arg(score).arg(id);
    if(query.exec(str)==false){
        qDebug()<<str;
    }
    else{
        qDebug()<<"修改数据成功!";
        queryTable();
    }
}
//排序按钮对应的槽函数
void StudentDialog::on_sortButton_clicked()
{
    //获取排序列名
    QString value = ui->valueComboBox->currentText();
    //获取排序方式
    QString condition;
    if(ui->condComboBox->currentIndex()==0){
        condition = "ASC";//升序
    }
    else{
        condition = "DESC";//降序
    }
    QString str = QString("SELECT * FROM student ORDER BY %1 %2").arg(value).arg(condition);
    //查询和显示
    model.setQuery(str);
    ui->tableView->setModel(&model);
}
