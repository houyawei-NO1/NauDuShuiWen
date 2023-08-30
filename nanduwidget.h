#ifndef NANDUWIDGET_H
#define NANDUWIDGET_H

#include <QWidget>
#include <QLabel>
#include <QVBoxLayout>
#include <QPushButton>
#include <QGridLayout>
#include <QDesktopWidget>
#include <QApplication>
#include <QDebug>
#include <QStackedWidget>
#include <QDir>
#include <QProcess>
#include "menubarwid.h"
#include "ndmassegebox.h"
#include "ctipareawid.h"
#include "cstatewid.h"
#include "serialport.h"
#include "mainwidget.h"


class NanDuWidget : public QWidget
{
    Q_OBJECT
public:
    explicit NanDuWidget(QWidget *parent = nullptr);
    ~NanDuWidget();
    void setupUi();
    void Reset();
    void reboot();



private:
    QWidget *widget=new QWidget(this);
    QGridLayout *gLayout;
    MenuBarWid* m_pMenuBar;
    ndmassegebox *m_ndMsgBox;
    QWidget *m_Darkwidge;
    CTipAreaWid *m_pTipAreaWid;
    CStateWid *m_pStateAreawid;
    QStackedWidget *m_StackedWidget;
    mainwidget *m;
    serialport *rs485;


signals:

public slots:
    void SelectButton(int);
    void click_on_Max();
    void click_on_Min();
    void click_on_closeall();
    void CloseSoft();
    void click_on_msgok(int);
    void click_on_msgcancel();

};

#endif // NANDUWIDGET_H
