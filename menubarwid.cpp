#include "menubarwid.h"

float minvalue = 0.0;
float maxvalue = 0.0;

MenuBarWid::MenuBarWid(QWidget *parent) : QWidget(parent)
{
    lb_TotleNum = new QLabel(this);
    ProgressBar = new QProgressBar(this);
    ProgressBar->setMinimum(0);
    ProgressBar->setMaximum(15);
    ProgressBar->setFormat("%v");
    ProgressBar->setAlignment(Qt::AlignLeft | Qt::AlignVCenter);  // 对齐方式
    ProgressBar->hide();
    setupUi();

}
void MenuBarWid::setupUi()
{
    this->setAttribute(Qt::WA_StyledBackground,true);
    setWindowFlags(Qt::FramelessWindowHint);
   this->setStyleSheet("background-color:rgb(43,48,70)");

//   setMaximumHeight(60);
//   setMinimumHeight(60);

   m_ItotleNum = 0;

   m_bMode = true;


   QString s1 = "QProgressBar {\
       border: 2px solid grey;\
       border-radius: 5px;\
       text-align: center;\
       color:#ffffff;\
       font-size:40px;\
   }";

   QString s2 = "QProgressBar::chunk {\
       background-color: rgb(67,207,124);\
       width: 20px;\
    }";


   //       margin: 0.5px;\

   ProgressBar->setStyleSheet(s1+s2);

   Init();
}

MenuBarWid::~MenuBarWid()
{

}

void MenuBarWid::Init()
{
    QHBoxLayout *main_layout = new QHBoxLayout(this);

    QHBoxLayout *title_layout = new QHBoxLayout();
    m_pVersion_title = new QLabel(this);
    QLabel *logo_label = new QLabel(this);
    QPixmap pixmap(":/image/logo");
    logo_label->setPixmap(pixmap.scaled(50,50,Qt::KeepAspectRatioByExpanding));
    logo_label->setCursor(Qt::PointingHandCursor);
//    QImage image;
//    image.load(":/image/logo");
//    logo_label->setPixmap(QPixmap::fromImage(image));
//    logo_label->resize(QSize(50,50));

    m_pVersion_title->setMaximumHeight(40);
    logo_label->setMaximumWidth(120);
    logo_label->setAlignment(Qt::AlignCenter);
    m_pVersion_title->setAlignment(Qt::AlignCenter);

    title_layout->addWidget(logo_label);
    title_layout->addWidget(m_pVersion_title);
    title_layout->setSpacing(15);


    QHBoxLayout *button_layout = new QHBoxLayout();
    pushButtonGroup = new QButtonGroup(this);
    pushButtonGroup->setExclusive(true);
    connect(pushButtonGroup, SIGNAL(buttonClicked(int)), this, SLOT(slot_btnGroupClicked(int)));
    for(int i=0; i<4; i++)
    {
        QPushButton *tool_button = new QPushButton(this);//font-family: Microsoft YaHei;
        tool_button->setFixedSize(80,60);
        tool_button->setCheckable(true);
        tool_button->autoExclusive();
        tool_button->setFocusPolicy(Qt::NoFocus);
        tool_button->setStyleSheet("QPushButton{color:white;font:17px;border-radius:0px}"
                                   "QPushButton:checked{color:#1a67c0;background:#273d64;font:17px;border-bottom:1px solid #1673db}");
        pushButtonGroup->addButton(tool_button,i);
        button_layout->addWidget(tool_button, 0, Qt::AlignHCenter);

        if(i == 0)
            tool_button->setChecked(true);
    }
    button_layout->addStretch();
    button_layout->setSpacing(30);
    button_layout->setContentsMargins(50, 0, 0, 0);


    QHBoxLayout *count_layout = new QHBoxLayout();


////    m_lbTotleNum = new QLabel(this);
////    m_lbTotleNum->setStyleSheet("color:rgb(255,245,238);font:25px");
////    m_lbTotleNum->setText("0");
////    count_layout->addWidget(m_lbTotleNum);
//    count_layout->setSpacing(5);
//    count_layout->addWidget(ProgressBar);
//    ProgressBar->setValue(0);

    lb_TotleNum->setStyleSheet("color:rgb(255,245,238);font:25px");
    lb_TotleNum->setText("当前测试温度:");
    selectCombobox = new QComboBox(this);
    selectCombobox->addItem("40℃");
    selectCombobox->addItem("80℃");
    selectCombobox->setStyleSheet("color:rgb(255,245,238);font:25px");
    QLabel *minText =new QLabel(this);
    QLabel *maxText =new QLabel(this);
    minText->setText("MIN(Ω):");
    minText->setStyleSheet("color:rgb(255,245,238);font:25px");
    minLineEdit = new QLineEdit(this);
    minLineEdit->setStyleSheet("color:rgb(255,245,238);font:25px");
    maxText->setText("MAX(Ω):");
    maxText->setStyleSheet("color:rgb(255,245,238);font:25px");
    maxLineEdit = new QLineEdit(this);
    maxLineEdit->setStyleSheet("color:rgb(255,245,238);font:25px");

    count_layout->setSpacing(5);
    count_layout->addWidget(lb_TotleNum);
    count_layout->addWidget(selectCombobox);
    count_layout->setSpacing(5);
    count_layout->addWidget(minText);
    count_layout->addWidget(minLineEdit);
    count_layout->setSpacing(5);
    count_layout->addWidget(maxText);
    count_layout->addWidget(maxLineEdit);
    count_layout->setSpacing(5);

    connect(selectCombobox,SIGNAL(currentIndexChanged(int)),this,SLOT(SetMinMaxValue()));
    connect(minLineEdit,SIGNAL(textEdited(QString)),this,SLOT(LineEditChanged()));
    connect(maxLineEdit,SIGNAL(textEdited(QString)),this,SLOT(LineEditChanged()));

    m_pMin_button = new PushButton();
    m_pMax_button = new PushButton();
    m_pClose_button = new PushButton();
    //设置图片
    m_pMin_button->loadPixmap(":/image/min_button");
    m_pMax_button->loadPixmap(":/image/max_button");
    m_pClose_button->loadPixmap(":/image/close_button");

    connect(m_pMin_button, SIGNAL(clicked()), this, SIGNAL(showMin()));
    connect(m_pMax_button, SIGNAL(clicked()), this, SIGNAL(showMax()));
    connect(m_pClose_button, SIGNAL(clicked()), this, SIGNAL(closeWidget()));

    main_layout->addLayout(title_layout);
    main_layout->addLayout(button_layout);
    main_layout->addSpacing(220);
    main_layout->addLayout(count_layout);
    main_layout->addStretch();

    main_layout->addWidget(m_pMin_button,0,Qt::AlignCenter);
    main_layout->addWidget(m_pMax_button,0,Qt::AlignCenter);
    main_layout->addWidget(m_pClose_button,0,Qt::AlignCenter);
    main_layout->setContentsMargins(10,0,10,0);

    SetMinMaxValue();
    this->translateLanguage();
}

void MenuBarWid::translateLanguage()
{
    m_pVersion_title->setText("南都汽车电子 水温传感器检测");
    m_pVersion_title->setStyleSheet("color:white;font:25px");

    pushButtonGroup->button(0)->setText("主界面");
    pushButtonGroup->button(1)->setText("配置");
//    pushButtonGroup->button(2)->setText("复位");
//    pushButtonGroup->button(3)->setText("数据接收");
    pushButtonGroup->button(2)->setText("重启");
    pushButtonGroup->button(3)->setText("关机");

}


void MenuBarWid::slot_btnGroupClicked(int btnNum)
{
    /*if(btnNum == 2)
        emit CurSelectPage(0);
    else if(btnNum > 2)
        emit CurSelectPage(btnNum - 1);
    else
        emit CurSelectPage(btnNum);*/


    emit CurSelectPage(btnNum);
}

void MenuBarWid::setFirBtnChecked()
{
    pushButtonGroup->button(0)->setChecked(true);
}


void MenuBarWid::slotSetTotleNum()
{
    m_ItotleNum++;
//    m_lbTotleNum->setText(QString::number(m_ItotleNum));

}

void MenuBarWid::rec_TotleNum(int num)
{
    lb_TotleNum->setText("共15个检验项目，当前通过项目:");
//    m_lbTotleNum->setText(QString::number(num));
    if (num == 15)
    {
    lb_TotleNum->setText("当前产品检验通过");
//    m_lbTotleNum->setText("");
    }
//    qDebug()<<num<<endl;
    ProgressBar->setValue(num);
}
void MenuBarWid::ReInit()
{
    lb_TotleNum->setText("共15个检验项目，当前通过项目:");
//    m_lbTotleNum->setText("0");
    ProgressBar->setValue(0);
}
void MenuBarWid::SetMinMaxValue()
{

    switch(selectCombobox->currentIndex()){
    case 0:
        minvalue=1126;
        maxvalue=1241;
        break;
    case 1:
        minvalue=313.5;
        maxvalue=336.6;
        break;
    default:
        break;
    }

       minLineEdit->setText(QString::number(minvalue ,'f',2));
       maxLineEdit->setText(QString::number(maxvalue ,'f',2));
}
void MenuBarWid::LineEditChanged()
{
//   qDebug()<<minLineEdit->text()<<endl;
//   qDebug()<<maxLineEdit->text()<<endl;
   minvalue = minLineEdit->text().toFloat();
   maxvalue = maxLineEdit->text().toFloat();
//      qDebug()<<minvalue<<endl;
//      qDebug()<<maxvalue<<endl;

}

