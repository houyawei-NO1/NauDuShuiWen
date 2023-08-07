#include "bak_mainwindow.h"
#include "nanduwidget.h"
#include "serialport.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

     NanDuWidget Widget;
     Widget.show();

     serialport rs485;
     rs485.show();

    return a.exec();
}
