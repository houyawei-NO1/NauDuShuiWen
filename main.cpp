#include "nanduwidget.h"
#include "serialport.h"
#include "mainwidget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    qputenv("QT_IM_MODULE", QByteArray("qtvirtualkeyboard"));
    QApplication a(argc, argv);

    NanDuWidget Widget;
    Widget.show();

    return a.exec();
}
