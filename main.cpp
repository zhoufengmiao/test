#include "VSTest.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    VSTest w;
    w.show();
    return a.exec();
}
