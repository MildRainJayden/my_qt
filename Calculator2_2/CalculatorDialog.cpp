#include "CalculatorDialog.h"
//构造函数
CalculatorDialog::CalculatorDialog(void)
    :ui(new Ui::CalculatorDialog)
{
    //界面初始化
    ui->setupUi(this);

    //设置数字验证器,只能输入数字形式内容
    ui->m_editX->setValidator(new QDoubleValidator(this));
    ui->m_editY->setValidator(new QDoubleValidator(this));

    //信号和槽函数连接
    //左右操作数文本改变时,发送信号textChanged()
    connect(ui->m_editX,SIGNAL(textChanged(QString)),
            this,SLOT(enableButton(void))); 
    connect(ui->m_editY,SIGNAL(textChanged(QString)),
            this,SLOT(enableButton(void)));
    connect(ui->m_button,SIGNAL(clicked(void)),
            this,SLOT(calcClicked(void)));
}
CalculatorDialog::~CalculatorDialog(void){
    delete ui;
}
//使能等号按钮的槽操作数
void CalculatorDialog::enableButton(void)
{
    bool bXOk,bYOk;
    //text():获取输入文本(QString)
    //toDouble():QString转换为double,参数保存转换是否成功的结果
    ui->m_editX->text().toDouble(&bXOk);
    ui->m_editY->text().toDouble(&bYOk);
    //当左右操作数都输入了有效数据,则使能等号按钮,否则设置禁用
    ui->m_button->setEnabled(bXOk && bYOk);
}
//计算结果和显示的槽函数
void CalculatorDialog::calcClicked(void)
{
    double res = ui->m_editX->text().toDouble()+
                ui->m_editY->text().toDouble();
    //number():将double转换为QString
    QString str = QString::number(res);
    //显示字符串形式结果
    ui->m_editZ->setText(str);
}
