#include "nanduwidget.h"
#include "serialport.h"
#include "mainwidget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    NanDuWidget Widget;
    Widget.show();

    return a.exec();
}
