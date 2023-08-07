#include "serialport.h"
 static bool SaveLog;

serialport::serialport(QWidget *parent) : QWidget(parent)
{


    mainlayout = new QGridLayout(this);
    vlayout =new QVBoxLayout();
    vTextlayout =new QVBoxLayout();
    filelayout = new QHBoxLayout();
    sendLineEdit = new QLineEdit;
    sendLineEdit->setMaximumHeight(100);
    messageBox = new QTextEdit;
    filemessageBox = new QTextEdit;

    hlayout = new QHBoxLayout();
    sendButton = new QPushButton;
    status = new QLabel;
    status->setAlignment(Qt::AlignCenter);
    status->setText("尚未连接");
    inputAppend= new QComboBox;
    inputAppend->addItem("输入内容无追加");
    inputAppend->addItem("CR");
    inputAppend->addItem("LF");
    inputAppend->addItem("CR/LF");
    question = new QPushButton;
    question->setText("?");
    sendButton->setText("发送");
    sendButton->setShortcut(Qt::Key_Return);
    clearText = new QPushButton;
    clearText->setText("清屏");

    setting1= new QComboBox;
     foreach (const QSerialPortInfo &serialPortInfo, QSerialPortInfo::availablePorts())
     {
         setting1->addItem(serialPortInfo.portName());
     }
  //   setting1->addItem("/dev/ttyUSB0");
  //   setting1->addItem("/dev/ttyUSB1");
  //   setting1->addItem("/dev/ttyUSB2");
  //   setting1->addItem("/dev/ttyUSB3");
  //   setting1->addItem("/dev/ttyUSB4");

    setting2= new QComboBox;
    setting2->addItem("115200");
    setting2->addItem("941176");
    setting2->addItem("921600");
    setting2->addItem("57600");
    setting2->addItem("38400");
    setting2->addItem("19200");
    setting2->addItem("9600");
    setting2->addItem("4800");
    setting2->addItem("1000000");
    setting3=new QCheckBox;
    setting3->setText("以十六进制形式显示");
    openButton = new QPushButton();
    openButton->setText("打开");
    openButton->setShortcut(QKeySequence::Open);
    closeButton = new QPushButton;
    closeButton->setText("关闭");
    closeButton->setShortcut(QKeySequence::Close);
    refreshButton = new QPushButton;
    refreshButton->setText("刷新串口列表");

    saveButton = new QPushButton();
    saveButton->setText("保存日志");
    sendtime= new QComboBox;
    sendtime->addItem("0ms");
    sendtime->addItem("30");
    sendtime->addItem("35");
    sendtime->addItem("40");
    sendtime->addItem("45");
    sendtime->addItem("50");
    sendtime->addItem("55");
    sendtime->addItem("60");
    sendtime->addItem("65");
    sendtime->addItem("70");
    sendtime->addItem("100");
    sendtime->addItem("150");
    sendtime->addItem("200");
    sendtime->addItem("300");
    sendtime->addItem("400");
    sendtime->addItem("500");
    sendtime->addItem("1000");
    readButton = new QPushButton;
    readButton->setText("向串口发送日志");

    mainlayout->addLayout(vTextlayout,0,0,10,7);
    vTextlayout->addWidget(messageBox,7);
    vTextlayout->addWidget(filemessageBox,3);
    mainlayout->addLayout(vlayout,0,8,10,3);
    vlayout->addStretch(1);
    vlayout->addWidget(status);
    vlayout->addStretch(1);
    vlayout->addWidget(sendLineEdit);
    vlayout->addLayout(hlayout);
    hlayout->addWidget(inputAppend);
    hlayout->addWidget(question);
    vlayout->addWidget(sendButton);
    vlayout->addWidget(clearText);
    vlayout->addStretch(1);
    // vlayout->addStretch();
    vlayout->addWidget(setting1);
    vlayout->addWidget(refreshButton);
    vlayout->addWidget(setting2);
    vlayout->addWidget(setting3);
    vlayout->addWidget(openButton);
    vlayout->addWidget(closeButton);
    vlayout->addStretch(1);
    vlayout->addLayout(filelayout);
    filelayout->addWidget(saveButton);
    filelayout->addWidget(sendtime);
    filelayout->addWidget(readButton);
    vlayout->addStretch(1);


    connect(openButton, SIGNAL(clicked()), this, SLOT(openbutton_clicked()));
    connect(closeButton, SIGNAL(clicked()), this, SLOT(closeButton_clicked()));
    connect(&global_port, SIGNAL(readyRead()), this, SLOT(rec_data()));
//    setLayout(mainlayout);
}

void serialport::system_init()
{
   qDebug()<<"系统初始化"<<endl;
   global_port.setParity(QSerialPort::NoParity);
   global_port.setDataBits(QSerialPort::Data8);
   global_port.setStopBits(QSerialPort::OneStop);
}
void serialport::openbutton_clicked()
{
    qDebug()<<"openbutton_clicked"<<endl;
    openButton->setDisabled(true);
    closeButton->setEnabled(true);

    QString portname =setting1->currentText();
       global_port.setPortName(setting1->currentText());

       switch(setting2->currentIndex()){
       case 0:
          global_port.setBaudRate(QSerialPort::Baud115200);
           break;
       case 1:
          global_port.setBaudRate(941176);
           break;
       case 2:
          global_port.setBaudRate(921600);
           break;
       case 3:
          global_port.setBaudRate(QSerialPort::Baud57600);
           break;
       case 4:
          global_port.setBaudRate(QSerialPort::Baud38400);
           break;
       case 5:
          global_port.setBaudRate(QSerialPort::Baud19200);
           break;
       case 6:
          global_port.setBaudRate(QSerialPort::Baud9600);
           break;
       case 7:
          global_port.setBaudRate(QSerialPort::Baud4800);
          qDebug()<<"4800";
           break;
       case 8:
          global_port.setBaudRate(1000000);
           break;
       default:
          global_port.setBaudRate(QSerialPort::Baud4800);
           break;
          }
       if(global_port.open(QIODevice::ReadWrite))

       {
           QSerialPortInfo SerialInfo(portname);
           //status->setText("串口已连接");
           QString Info = "串  口  已  连  接\n\n"+SerialInfo.portName()+"\n"+SerialInfo.description()+"\n"+SerialInfo.manufacturer()+"\n"+SerialInfo.serialNumber()+"\n"+SerialInfo.systemLocation();
           status->setText(Info);
       }
       else
           status->setText("无法连接至有效串口");

}

void serialport::closeButton_clicked()
{
    openButton->setEnabled(true);
    closeButton->setDisabled(true);
    status->setText("串口连接已断开");
    global_port.close();
}

void serialport::rec_data()
{
    QByteArray receiveArray = global_port.readAll();
    //          qInfo()<<receiveArray;
    QDateTime current_time = QDateTime::currentDateTime();
    //QString current_date = current_time.toString("yyyy-MM-dd hh:mm:ss");
    QString time = current_time.toString("hh:mm:ss");
    if(setting3->checkState() == Qt::Checked)
             messageBox->insertPlainText(QString(receiveArray.toHex()).toUpper());
             else
             {
             messageBox->insertPlainText(QString(receiveArray));
             if(SaveLog==true)
               {
                 QFile file("logsave.txt");
                 if (file.open(QIODevice::Append | QIODevice::Text))
                 {

                    file.write(receiveArray);
                    file.write("\n");
                    file.flush();
                    file.close();
                 }
             }
             if (QString(receiveArray)=="\r")
             messageBox->insertPlainText(time);
             }
             messageBox->moveCursor(QTextCursor::End);
}
