#include "mainwindow.h.bak"
#include "nanduwidget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

     NanDuWidget Widget;
     Widget.show();



    return a.exec();
}

