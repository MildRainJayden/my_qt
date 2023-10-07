#ifndef MOUSEDIALOG_H
#define MOUSEDIALOG_H

#include <QDialog>
#include <QMouseEvent>

namespace Ui {
class MouseDialog;
}

class MouseDialog : public QDialog
{
    Q_OBJECT

public:
    explicit MouseDialog(QWidget *parent = 0);
    ~MouseDialog();
private:
    //按下
    void mousePressEvent(QMouseEvent *);
    //抬起
    void mouseReleaseEvent(QMouseEvent *);
    //移动
    void mouseMoveEvent(QMouseEvent *);
private:
    Ui::MouseDialog *ui;
    bool m_drag;
    QPoint m_pos;
    //QRect(x,y,w,h) QPoint(x,y) QSize(w,h)

};

#endif // MOUSEDIALOG_H
