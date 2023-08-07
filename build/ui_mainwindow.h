/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_11;
    QLineEdit *sendIDEdit;
    QComboBox *comboBox_4;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *comboBox_6;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *comboBox_5;
    QLineEdit *sendDataEdit;
    QLabel *label_14;
    QPushButton *sendBtn;
    QGroupBox *groupBox_3;
    QPushButton *cleanListBtn;
    QCheckBox *checkBox_4;
    QTableWidget *tableWidget;
    QGroupBox *groupBox;
    QWidget *layoutWidget3;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label;
    QComboBox *comboBox;
    QComboBox *comboBox_3;
    QLabel *label_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton;
    QComboBox *comboBox_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QGroupBox *groupBox_4;
    QWidget *layoutWidget4;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QWidget *layoutWidget5;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_12;
    QLabel *label_13;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1920, 980);
        MainWindow->setMinimumSize(QSize(1920, 980));
        MainWindow->setMaximumSize(QSize(1920, 980));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(1100, 20, 791, 291));
        layoutWidget = new QWidget(groupBox_2);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 91, 411, 24));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout->addWidget(label_11);

        sendIDEdit = new QLineEdit(layoutWidget);
        sendIDEdit->setObjectName(QString::fromUtf8("sendIDEdit"));

        horizontalLayout->addWidget(sendIDEdit);

        comboBox_4 = new QComboBox(layoutWidget);
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->setObjectName(QString::fromUtf8("comboBox_4"));

        horizontalLayout->addWidget(comboBox_4);

        layoutWidget1 = new QWidget(groupBox_2);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 117, 411, 25));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        comboBox_6 = new QComboBox(layoutWidget1);
        comboBox_6->addItem(QString());
        comboBox_6->addItem(QString());
        comboBox_6->setObjectName(QString::fromUtf8("comboBox_6"));
        comboBox_6->setEnabled(true);

        horizontalLayout_2->addWidget(comboBox_6);

        layoutWidget2 = new QWidget(groupBox_2);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(11, 144, 411, 24));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        comboBox_5 = new QComboBox(layoutWidget2);
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->setObjectName(QString::fromUtf8("comboBox_5"));
        comboBox_5->setEnabled(true);

        horizontalLayout_3->addWidget(comboBox_5);

        sendDataEdit = new QLineEdit(groupBox_2);
        sendDataEdit->setObjectName(QString::fromUtf8("sendDataEdit"));
        sendDataEdit->setGeometry(QRect(10, 230, 411, 20));
        label_14 = new QLabel(groupBox_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(10, 200, 409, 22));
        sendBtn = new QPushButton(groupBox_2);
        sendBtn->setObjectName(QString::fromUtf8("sendBtn"));
        sendBtn->setEnabled(false);
        sendBtn->setGeometry(QRect(10, 170, 411, 23));
        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(40, 360, 1851, 551));
        cleanListBtn = new QPushButton(groupBox_3);
        cleanListBtn->setObjectName(QString::fromUtf8("cleanListBtn"));
        cleanListBtn->setGeometry(QRect(1680, 120, 81, 28));
        checkBox_4 = new QCheckBox(groupBox_3);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));
        checkBox_4->setEnabled(true);
        checkBox_4->setGeometry(QRect(1680, 50, 101, 20));
        checkBox_4->setChecked(false);
        tableWidget = new QTableWidget(groupBox_3);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(10, 30, 1641, 501));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(40, 20, 481, 291));
        layoutWidget3 = new QWidget(groupBox);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(20, 29, 247, 195));
        gridLayout = new QGridLayout(layoutWidget3);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label = new QLabel(layoutWidget3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setEnabled(false);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        comboBox = new QComboBox(layoutWidget3);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setEnabled(false);

        gridLayout->addWidget(comboBox, 0, 1, 1, 1);

        comboBox_3 = new QComboBox(layoutWidget3);
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));
        comboBox_3->setInsertPolicy(QComboBox::InsertAfterCurrent);

        gridLayout->addWidget(comboBox_3, 2, 1, 1, 1);

        label_3 = new QLabel(layoutWidget3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        pushButton_4 = new QPushButton(layoutWidget3);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setEnabled(false);
        pushButton_4->setFlat(false);

        gridLayout->addWidget(pushButton_4, 3, 1, 1, 1);

        pushButton = new QPushButton(layoutWidget3);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setCheckable(false);

        gridLayout->addWidget(pushButton, 3, 0, 1, 1);

        comboBox_2 = new QComboBox(layoutWidget3);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        gridLayout->addWidget(comboBox_2, 1, 1, 1, 1);

        pushButton_3 = new QPushButton(layoutWidget3);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setEnabled(false);

        gridLayout->addWidget(pushButton_3, 4, 1, 1, 1);

        pushButton_2 = new QPushButton(layoutWidget3);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setEnabled(false);

        gridLayout->addWidget(pushButton_2, 4, 0, 1, 1);

        groupBox_4 = new QGroupBox(centralWidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(550, 20, 511, 291));
        layoutWidget4 = new QWidget(groupBox_4);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(10, 30, 181, 144));
        verticalLayout_3 = new QVBoxLayout(layoutWidget4);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget4);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_3->addWidget(label_5);

        label_6 = new QLabel(layoutWidget4);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_3->addWidget(label_6);

        label_7 = new QLabel(layoutWidget4);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_3->addWidget(label_7);

        label_8 = new QLabel(layoutWidget4);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_3->addWidget(label_8);

        layoutWidget5 = new QWidget(groupBox_4);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(210, 30, 171, 144));
        verticalLayout_4 = new QVBoxLayout(layoutWidget5);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget5);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        verticalLayout_4->addWidget(label_9);

        label_10 = new QLabel(layoutWidget5);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        verticalLayout_4->addWidget(label_10);

        label_12 = new QLabel(layoutWidget5);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        verticalLayout_4->addWidget(label_12);

        label_13 = new QLabel(layoutWidget5);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        verticalLayout_4->addWidget(label_13);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        pushButton_4->setDefault(false);
        pushButton->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256\345\217\221\351\200\201", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "ID(0x):", nullptr));
        sendIDEdit->setText(QCoreApplication::translate("MainWindow", "00000000", nullptr));
        comboBox_4->setItemText(0, QCoreApplication::translate("MainWindow", "\351\200\232\351\201\2230", nullptr));
        comboBox_4->setItemText(1, QCoreApplication::translate("MainWindow", "\351\200\232\351\201\2231", nullptr));

        comboBox_6->setItemText(0, QCoreApplication::translate("MainWindow", "\346\240\207\345\207\206\345\270\247", nullptr));
        comboBox_6->setItemText(1, QCoreApplication::translate("MainWindow", "\346\211\251\345\261\225\345\270\247", nullptr));

        comboBox_5->setItemText(0, QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256\345\270\247", nullptr));
        comboBox_5->setItemText(1, QCoreApplication::translate("MainWindow", "\350\277\234\347\250\213\345\270\247", nullptr));

        sendDataEdit->setText(QCoreApplication::translate("MainWindow", "00 11 22 33 44 55 66 77", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256(0x,\344\273\245\347\251\272\346\240\274\351\232\224\345\274\200)\357\274\232", nullptr));
        sendBtn->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256\346\216\245\346\224\266", nullptr));
        cleanListBtn->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272", nullptr));
        checkBox_4->setText(QCoreApplication::translate("MainWindow", "\345\256\236\346\227\266\346\230\276\347\244\272", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\350\256\276\345\244\207\347\264\242\345\274\225\357\274\232", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\350\256\276\345\244\207\347\261\273\345\236\213\357\274\232", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "USBCAN-2A", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "USBCAN-2C", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "CANalyst-II", nullptr));

        comboBox_3->setItemText(0, QCoreApplication::translate("MainWindow", "10Kbps", nullptr));
        comboBox_3->setItemText(1, QCoreApplication::translate("MainWindow", "20Kbps", nullptr));
        comboBox_3->setItemText(2, QCoreApplication::translate("MainWindow", "40Kbps", nullptr));
        comboBox_3->setItemText(3, QCoreApplication::translate("MainWindow", "50Kbps", nullptr));
        comboBox_3->setItemText(4, QCoreApplication::translate("MainWindow", "80Kbps", nullptr));
        comboBox_3->setItemText(5, QCoreApplication::translate("MainWindow", "100Kbps", nullptr));
        comboBox_3->setItemText(6, QCoreApplication::translate("MainWindow", "125Kbps", nullptr));
        comboBox_3->setItemText(7, QCoreApplication::translate("MainWindow", "200Kbps", nullptr));
        comboBox_3->setItemText(8, QCoreApplication::translate("MainWindow", "250Kbps", nullptr));
        comboBox_3->setItemText(9, QCoreApplication::translate("MainWindow", "400Kbps", nullptr));
        comboBox_3->setItemText(10, QCoreApplication::translate("MainWindow", "500Kbps", nullptr));
        comboBox_3->setItemText(11, QCoreApplication::translate("MainWindow", "666Kbps", nullptr));
        comboBox_3->setItemText(12, QCoreApplication::translate("MainWindow", "800Kbps", nullptr));
        comboBox_3->setItemText(13, QCoreApplication::translate("MainWindow", "1000Kbps", nullptr));
        comboBox_3->setItemText(14, QCoreApplication::translate("MainWindow", "33.33Kbps", nullptr));
        comboBox_3->setItemText(15, QCoreApplication::translate("MainWindow", "66.66Kbps", nullptr));
        comboBox_3->setItemText(16, QCoreApplication::translate("MainWindow", "83.33Kbps", nullptr));

        label_3->setText(QCoreApplication::translate("MainWindow", "\346\263\242\347\211\271\347\216\207\357\274\232", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "\345\244\215\344\275\215", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\350\256\276\345\244\207", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("MainWindow", "0", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("MainWindow", "1", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("MainWindow", "2", nullptr));
        comboBox_2->setItemText(3, QCoreApplication::translate("MainWindow", "3", nullptr));
        comboBox_2->setItemText(4, QCoreApplication::translate("MainWindow", "4", nullptr));
        comboBox_2->setItemText(5, QCoreApplication::translate("MainWindow", "5", nullptr));
        comboBox_2->setItemText(6, QCoreApplication::translate("MainWindow", "6", nullptr));
        comboBox_2->setItemText(7, QCoreApplication::translate("MainWindow", "7", nullptr));
        comboBox_2->setItemText(8, QCoreApplication::translate("MainWindow", "8", nullptr));
        comboBox_2->setItemText(9, QCoreApplication::translate("MainWindow", "9", nullptr));
        comboBox_2->setItemText(10, QCoreApplication::translate("MainWindow", "10", nullptr));
        comboBox_2->setItemText(11, QCoreApplication::translate("MainWindow", "11", nullptr));
        comboBox_2->setItemText(12, QCoreApplication::translate("MainWindow", "12", nullptr));
        comboBox_2->setItemText(13, QCoreApplication::translate("MainWindow", "13", nullptr));

        pushButton_3->setText(QCoreApplication::translate("MainWindow", "\345\220\257\345\212\250CAN", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\345\210\235\345\247\213\345\214\226CAN", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "\346\216\245\345\217\243\346\235\277\344\277\241\346\201\257", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "CAN\351\200\232\351\201\223\346\225\260\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\347\241\254\344\273\266\347\211\210\346\234\254\345\217\267:", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\346\216\245\345\217\243\345\272\223\347\211\210\346\234\254\345\217\267\357\274\232", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\344\270\255\346\226\255\345\217\267:", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "N/A", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "N/A", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "N/A", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "N/A", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
