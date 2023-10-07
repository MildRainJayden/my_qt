#include "erinedialog.h"
#include "ui_erinedialog.h"

ErineDialog::ErineDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ErineDialog)
{
    ui->setupUi(this);
    m_index = 0;
    isStarted = false;
    //设置随机数种子
    qsrand(QTime::currentTime().msec());
    //加载"./photos"所有图片到容器的功能
    loadPhotos("./photos");
    qDebug()<<"加载图片个数:"<<m_vecPhotos.size();
}

ErineDialog::~ErineDialog()
{
    delete ui;
}
//开始按钮对应的槽函数
void ErineDialog::on_pushButton_clicked()
{
    if(isStarted == false){
        isStarted = true;//摇奖开始
        m_timer = startTimer(50);
        ui->pushButton->setText("停止");
    }
    else{
        isStarted = false;//摇奖结束
        killTimer(m_timer);
        ui->pushButton->setText("开始");
    }
}
//加载图片容器功能
void ErineDialog::loadPhotos(const QString& path)
{
    QDir dir(path);
    //遍历当前目录所有图片
    QStringList list1 = dir.entryList(QDir::Files);
    for(int i=0;i<list1.size();i++){
        QImage image(path+"/"+list1.at(i));
        m_vecPhotos << image;
    }
    //递归遍历子目录中的图片
    QStringList list2 = dir.entryList(QDir::Dirs|QDir::NoDotAndDotDot);
    for(int i=0;i<list2.size();i++){
        loadPhotos(path+"/"+list2.at(i));
    }
}

//定时器事件处理函数
void ErineDialog::timerEvent(QTimerEvent *)
{
    m_index = qrand()%m_vecPhotos.size();
    update();
}

//绘图事件处理函数
void ErineDialog::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    QRect rect = ui->frame->frameRect();
    rect.translate(ui->frame->pos());
    painter.drawImage(rect,m_vecPhotos[m_index]);
}
