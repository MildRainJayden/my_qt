#ifndef __CALCULATORDIALOG_H
#define __CALCULATORDIALOG_H

#include "ui_CalculatorDialog.h"

//1)继承方法
class CalculatorDialog:public QDialog,public Ui::CalculatorDialog{
    Q_OBJECT //moc
public:
    CalculatorDialog(void);
public slots:
    //使能等号按钮的槽操作数
    void enableButton(void);
    //计算结果和显示的槽函数
    void calcClicked(void);

};

#endif//_CALCULATORDIALOG_H
