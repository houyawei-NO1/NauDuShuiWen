#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>
#include <QGridLayout>
#include <QLabel>
#include <QDesktopWidget>
#include <QApplication>
#include "menubarwid.h"

class mainwidget : public QWidget
{
    Q_OBJECT
public:
    explicit mainwidget(QWidget *parent = nullptr);
    int currentScreenWid;//整个主部件区域大小
    int currentScreenHei;//整个主部件区域大小

signals:
    void DataRec_sta_DevA();
    void DataRec_sta_DevB();
    void DataRec_sta_DevC();
    void DataRec_sta_DevD();

public slots:
    void QStringListDeal(QStringList);

private:
    QHBoxLayout *mainlayout;
    QGridLayout *gridlayout_left;
    QGridLayout *gridlayout_right;
    QLabel *dianzu[50];

};

#endif // MAINWIDGET_H
