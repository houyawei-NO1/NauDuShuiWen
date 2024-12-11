#include "mainwidget.h"
#include <QDebug>

mainwidget::mainwidget(QWidget *parent) : QWidget(parent)
{

    this->setAttribute(Qt::WA_StyledBackground,true);
    this->setStyleSheet("background-color:rgb(28,32,48);");
//    this->setStyleSheet("background-color:rgb(43,48,70);color:rgb(255,245,238)");
    this->setWindowFlags(Qt::FramelessWindowHint);
    QDesktopWidget* desktopWidget = QApplication::desktop();
    QRect screenRect = desktopWidget->screenGeometry();
    currentScreenWid = (screenRect.width());
    currentScreenHei = (screenRect.height() - 100);
    this->setFixedSize(currentScreenWid,currentScreenHei);

    mainlayout = new QHBoxLayout(this);
    mainlayout->setContentsMargins(5,10,5,10);
    mainlayout->setSpacing(0);

    gridlayout_left = new QGridLayout();
    gridlayout_right = new QGridLayout();
    mainlayout->addLayout(gridlayout_left,8);
    mainlayout->addLayout(gridlayout_right,2);

    gridlayout_left->setMargin(0);
    gridlayout_right->setMargin(0);
    gridlayout_left->setSpacing(0);
    gridlayout_right->setSpacing(0);
    gridlayout_left->setContentsMargins(0,10,0,10);

    for(int i=0;i<5;i++)
        for(int j=0;j<10;j++)
        {
        dianzu[i*10+j]  = new QLabel();
//        qDebug()<<i*10+j<<endl;
        dianzu[i*10+j]->setText(QString::number(i*10+j+1));
        dianzu[i*10+j]->setAlignment(Qt::AlignCenter);
        dianzu[i*10+j]->setStyleSheet("background-color:rgb(43,48,70);color:rgb(255,245,238);font:40px");
        gridlayout_left->addWidget(dianzu[i*10+j],i,j);
        }
//    qDebug()<<"mainwidget"<<minvalue<<endl;
}

void mainwidget::QStringListDeal(QStringList str_list)
{
    if(str_list.size()>18)
    qDebug()<<"1:"<<str_list.at(1)
            <<"3:"<<str_list.at(3)
            <<"4:"<<str_list.at(4)
            <<"5:"<<str_list.at(5)
            <<"6:"<<str_list.at(6)
            <<"7:"<<str_list.at(7)
            <<"8:"<<str_list.at(8)
            <<"9:"<<str_list.at(9)
            <<"10:"<<str_list.at(10)
            <<"11:"<<str_list.at(11)
            <<"12:"<<str_list.at(12)
            <<"13:"<<str_list.at(13)
            <<"14:"<<str_list.at(14)
            <<"15:"<<str_list.at(15)
            <<"16:"<<str_list.at(16)
            <<"17:"<<str_list.at(17)
            <<endl;
    if(str_list.at(1) == "F7E3C91501B633")
        {
            qDebug()<<"F7E3C91501B633"<<endl;
            for(int i = 0;i<14;i++)
                {
                dianzu[i]->setText(str_list.at(i+3));
                if(dianzu[i]->text().toFloat()>minvalue && dianzu[i]->text().toFloat()<maxvalue)
                    dianzu[i]->setStyleSheet("color:rgb(67,207,124);font:40px");
                else
                    dianzu[i]->setStyleSheet("color:rgb(255,245,238);font:40px");
                }
            emit DataRec_sta_DevA();
        }
    else if(str_list.at(1) == "F7E3C916017217")
        {
            qDebug()<<"F7E3C916017217"<<endl;
            for(int i = 14;i<28;i++)
            {
            dianzu[i]->setText(str_list.at(i-11));
            if(dianzu[i]->text().toFloat()>minvalue && dianzu[i]->text().toFloat()<maxvalue)
                dianzu[i]->setStyleSheet("color:rgb(67,207,124);font:40px");
            else
                dianzu[i]->setStyleSheet("color:rgb(255,245,238);font:40px");
            }
            emit DataRec_sta_DevB();
        }
        else if(str_list.at(1) == "F7E3C912016531")
        {
            qDebug()<<"F7E3C912016531"<<endl;
            for(int i = 28;i<42;i++)
            {
                dianzu[i]->setText(str_list.at(i-11));
                if(dianzu[i]->text().toFloat()>minvalue && dianzu[i]->text().toFloat()<maxvalue)
                    dianzu[i]->setStyleSheet("color:rgb(67,207,124);font:40px");
                else
                    dianzu[i]->setStyleSheet("color:rgb(255,245,238);font:40px");
            }
            // emit DataRec_sta_DevB();
        }
        else if(str_list.at(1) == "F7E3C912016530")
        {
            qDebug()<<"F7E3C912016530"<<endl;
            for(int i = 42;i<50;i++)
            {
                dianzu[i]->setText(str_list.at(i-11));
                if(dianzu[i]->text().toFloat()>minvalue && dianzu[i]->text().toFloat()<maxvalue)
                    dianzu[i]->setStyleSheet("color:rgb(67,207,124);font:40px");
                else
                    dianzu[i]->setStyleSheet("color:rgb(255,245,238);font:40px");
            }
            // emit DataRec_sta_DevB();
        }
}

