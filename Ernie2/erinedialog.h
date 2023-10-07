#ifndef ERINEDIALOG_H
#define ERINEDIALOG_H

#include <QDialog>
#include <QTimer>
#include <QPainter>
#include <QDir>
#include <QTime>
#include <QVector>
#include <QImage>
#include <QDebug>

namespace Ui {
class ErineDialog;
}

class ErineDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ErineDialog(QWidget *parent = 0);
    ~ErineDialog();

private slots:
    //开始按钮对应的槽函数
    void on_pushButton_clicked();
private:
    //加载图片容器功能
    void loadPhotos(const QString& path);
    //定时器事件处理函数
    void timerEvent(QTimerEvent *);
private slots:
    //定时器到时以后要执行的槽函数
    void onTimeout(void);
    //绘图事件处理函数
    void paintEvent(QPaintEvent *);
private:
    Ui::ErineDialog *ui;
    QVector<QImage> m_vecPhotos;//保存图片的容器,QImage m_vecPhotos[?]
    int m_index;//图片在容器索引
//    int m_timer;//定时器id
    QTimer m_timer;//定时器
    bool isStarted;//标记:ture正在摇奖,false停止摇奖
};

#endif // ERINEDIALOG_H
