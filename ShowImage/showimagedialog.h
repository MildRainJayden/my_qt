#ifndef SHOWIMAGEDIALOG_H
#define SHOWIMAGEDIALOG_H

#include <QDialog>
#include <QPainter>//画家类
#include <QImage>//图片


namespace Ui {
class ShowImageDialog;
}

class ShowImageDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ShowImageDialog(QWidget *parent = 0);
    ~ShowImageDialog();

private slots:
    //上一张对应的槽函数
    void on_m_btnPrev_clicked();
    //下一张对应的槽函数
    void on_m_btnNext_clicked();
private:
    //绘图事件处理函数(虚函数)
    void paintEvent(QPaintEvent *);
private:
    Ui::ShowImageDialog *ui;
    int m_index;//图片索引
};

#endif // SHOWIMAGEDIALOG_H
