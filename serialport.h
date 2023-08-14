#ifndef SERIALPORT_H
#define SERIALPORT_H

#include <QWidget>
#include <QtSerialPort/QSerialPort>
#include <QSerialPortInfo>
#include <QDebug>
#include <QGridLayout>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLineEdit>
#include <QTextEdit>
#include <QPushButton>
#include <QLabel>
#include <QComboBox>
#include <QCheckBox>
#include <QDateTime>
#include <QFile>





class serialport : public QWidget
{
    Q_OBJECT
public:
    explicit serialport(QWidget *parent = nullptr);
    void system_init();

signals:

private slots:
    void openbutton_clicked();
    void closeButton_clicked();
    void sendButton_clicked();
    void rec_data();
private:


      QSerialPort global_port;
      QGridLayout *mainlayout;
      QVBoxLayout *vlayout;
      QVBoxLayout *vTextlayout;
      QHBoxLayout *filelayout;
      QLineEdit *sendLineEdit;
      QTextEdit *messageBox;
      QTextEdit *filemessageBox;

      QHBoxLayout *hlayout;
      QPushButton *sendButton;
      QLabel *status;
      QComboBox *inputAppend;
      QPushButton *question;
      QPushButton *clearText;

      QComboBox *setting1;
      QComboBox *setting2;
      QCheckBox *setting3;
      QPushButton *openButton;
      QPushButton *closeButton;
      QPushButton *refreshButton;

      QPushButton *saveButton;
      QComboBox *sendtime;
      QPushButton *readButton;

//      connect(openButton, &QPushButton::clicked, this, [ = ] {
};

#endif // SERIALPORT_H
