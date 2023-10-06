#ifndef __CALCULATORDIALOG_H
#define __CALCULATORDIALOG_H

#include "ui_CalculatorDialog.h"

//2)组合方法
class CalculatorDialog:public QDialog{
    Q_OBJECT //moc
public:
    CalculatorDialog(void);
    ~CalculatorDialog(void);
public slots:
    //使能等号按钮的槽操作数
    void enableButton(void);
    //计算结果和显示的槽函数
    void calcClicked(void);
private:
    //将来通过"ui->"访问和界面相关的代码
    Ui::CalculatorDialog* ui;
};

#endif//_CALCULATORDIALOG_H
