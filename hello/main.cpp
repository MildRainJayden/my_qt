#include <QApplication>
#include <QLabel>

int main(int argc,char** argv)
{
    //创建qt应用程序对象
    QApplication app(argc,argv);

    //创建标签控件
    QLabel label("hello qt!");

    //显示标签控件
    label.show();

    //让应用程序进入事件
    return app.exec();

}
