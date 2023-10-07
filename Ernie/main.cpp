#include "erinedialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ErineDialog w;
    w.show();

    return a.exec();
}
