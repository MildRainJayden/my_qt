#include "CalculatorDialog.h"
//构造函数
CalculatorDialog::CalculatorDialog(void)
{
    //界面初始化
    setupUi(this);

    //设置数字验证器,只能输入数字形式内容
    m_editX->setValidator(new QDoubleValidator(this));
    m_editY->setValidator(new QDoubleValidator(this));

    //信号和槽函数连接
    //左右操作数文本改变时,发送信号textChanged()
    connect(m_editX,SIGNAL(textChanged(QString)),
            this,SLOT(enableButton(void))); 
    connect(m_editY,SIGNAL(textChanged(QString)),
            this,SLOT(enableButton(void)));
    connect(m_button,SIGNAL(clicked(void)),
            this,SLOT(calcClicked(void)));
}
//使能等号按钮的槽操作数
void CalculatorDialog::enableButton(void)
{
    bool bXOk,bYOk;
    //text():获取输入文本(QString)
    //toDouble():QString转换为double,参数保存转换是否成功的结果
    m_editX->text().toDouble(&bXOk);
    m_editY->text().toDouble(&bYOk);
    //当左右操作数都输入了有效数据,则使能等号按钮,否则设置禁用
    m_button->setEnabled(bXOk && bYOk);
}
//计算结果和显示的槽函数
void CalculatorDialog::calcClicked(void)
{
    double res = m_editX->text().toDouble()+
                m_editY->text().toDouble();
    //number():将double转换为QString
    QString str = QString::number(res);
    //显示字符串形式结果
    m_editZ->setText(str);
}
