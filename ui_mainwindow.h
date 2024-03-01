/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget_7;
    QTextBrowser *textBrowser;
    QWidget *widget_16;
    QWidget *widget_8;
    QWidget *widget_9;
    QWidget *widget_13;
    QWidget *widget_15;
    QPushButton *fileButton;
    QTextEdit *textEdit;
    QPushButton *sendBut;
    QLabel *label;
    QWidget *widget_10;
    QHBoxLayout *horizontalLayout;
    QWidget *widget_17;
    QSpacerItem *horizontalSpacer;
    QWidget *widget_18;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget_19;
    QSpacerItem *horizontalSpacer_3;
    QWidget *widget_20;
    QWidget *widget_6;
    QLineEdit *searchlineEdit;
    QListWidget *listWidget;
    QWidget *widget_11;
    QWidget *widget_12;
    QWidget *widget;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_2;
    QSpacerItem *verticalSpacer_3;
    QWidget *widget_3;
    QSpacerItem *verticalSpacer_2;
    QWidget *friendWidget;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QWidget *widget_5;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1260, 713);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        widget_7 = new QWidget(centralwidget);
        widget_7->setObjectName("widget_7");
        widget_7->setGeometry(QRect(420, 10, 831, 671));
        widget_7->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 240, 240);"));
        textBrowser = new QTextBrowser(widget_7);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(0, 81, 811, 351));
        textBrowser->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 240, 240);"));
        widget_16 = new QWidget(widget_7);
        widget_16->setObjectName("widget_16");
        widget_16->setGeometry(QRect(0, 430, 811, 241));
        widget_16->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        widget_8 = new QWidget(widget_16);
        widget_8->setObjectName("widget_8");
        widget_8->setGeometry(QRect(0, 0, 211, 41));
        widget_8->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        widget_9 = new QWidget(widget_8);
        widget_9->setObjectName("widget_9");
        widget_9->setGeometry(QRect(9, 9, 41, 31));
        widget_9->setMinimumSize(QSize(41, 31));
        widget_9->setStyleSheet(QString::fromUtf8("image: url(:/res/pic/\350\241\250\346\203\205.png);\n"
"background-color: rgba(255, 255, 255, 0);"));
        widget_13 = new QWidget(widget_8);
        widget_13->setObjectName("widget_13");
        widget_13->setGeometry(QRect(62, 9, 41, 31));
        widget_13->setMinimumSize(QSize(41, 31));
        widget_13->setStyleSheet(QString::fromUtf8("image: url(:/res/pic/\345\233\276\347\211\207.png);\n"
"background-color: rgba(255, 255, 255, 0);"));
        widget_15 = new QWidget(widget_8);
        widget_15->setObjectName("widget_15");
        widget_15->setGeometry(QRect(168, 9, 41, 31));
        widget_15->setMinimumSize(QSize(41, 31));
        widget_15->setStyleSheet(QString::fromUtf8("image: url(:/res/pic/\346\210\252\345\233\276.png);\n"
"background-color: rgba(255, 255, 255, 0);"));
        fileButton = new QPushButton(widget_8);
        fileButton->setObjectName("fileButton");
        fileButton->setGeometry(QRect(120, 10, 31, 26));
        fileButton->setStyleSheet(QString::fromUtf8("border-image: url(:/res/pic/\346\226\207\344\273\266\345\244\271.png);"));
        textEdit = new QTextEdit(widget_16);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(0, 40, 791, 131));
        textEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        sendBut = new QPushButton(widget_16);
        sendBut->setObjectName("sendBut");
        sendBut->setGeometry(QRect(650, 170, 91, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("\346\226\271\346\255\243\351\273\221\344\275\223_GBK")});
        font.setPointSize(12);
        sendBut->setFont(font);
        sendBut->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(240, 240, 240);\n"
"border-radius:2px;\n"
""));
        label = new QLabel(widget_7);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 20, 141, 61));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        label->setFont(font1);
        widget_10 = new QWidget(widget_7);
        widget_10->setObjectName("widget_10");
        widget_10->setGeometry(QRect(700, -10, 121, 31));
        widget_10->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        horizontalLayout = new QHBoxLayout(widget_10);
        horizontalLayout->setObjectName("horizontalLayout");
        widget_17 = new QWidget(widget_10);
        widget_17->setObjectName("widget_17");
        widget_17->setMinimumSize(QSize(31, 21));
        widget_17->setStyleSheet(QString::fromUtf8("image: url(:/res/pic/\350\247\243\351\231\244\345\233\272\345\256\232,\345\233\276\351\222\211.png);"));

        horizontalLayout->addWidget(widget_17);

        horizontalSpacer = new QSpacerItem(1, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        widget_18 = new QWidget(widget_10);
        widget_18->setObjectName("widget_18");
        widget_18->setMinimumSize(QSize(31, 21));
        widget_18->setStyleSheet(QString::fromUtf8("image: url(:/res/pic/\345\207\217\345\217\267.png);"));

        horizontalLayout->addWidget(widget_18);

        horizontalSpacer_2 = new QSpacerItem(2, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        widget_19 = new QWidget(widget_10);
        widget_19->setObjectName("widget_19");
        widget_19->setMinimumSize(QSize(31, 21));
        widget_19->setStyleSheet(QString::fromUtf8("image: url(:/res/pic/\346\224\276\345\244\247.png);"));

        horizontalLayout->addWidget(widget_19);

        horizontalSpacer_3 = new QSpacerItem(1, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        widget_20 = new QWidget(widget_10);
        widget_20->setObjectName("widget_20");
        widget_20->setMinimumSize(QSize(31, 21));
        widget_20->setStyleSheet(QString::fromUtf8("image: url(:/res/pic/\345\210\240\351\231\2442.png);"));

        horizontalLayout->addWidget(widget_20);

        widget_6 = new QWidget(centralwidget);
        widget_6->setObjectName("widget_6");
        widget_6->setGeometry(QRect(90, 10, 321, 671));
        widget_6->setStyleSheet(QString::fromUtf8("background-color: rgb(235, 234, 232);"));
        searchlineEdit = new QLineEdit(widget_6);
        searchlineEdit->setObjectName("searchlineEdit");
        searchlineEdit->setGeometry(QRect(10, 30, 221, 41));
        QFont font2;
        font2.setPointSize(12);
        searchlineEdit->setFont(font2);
        searchlineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(218, 217, 215);\n"
"border-radius:20px;\n"
""));
        listWidget = new QListWidget(widget_6);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(0, 80, 321, 591));
        listWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        widget_11 = new QWidget(widget_6);
        widget_11->setObjectName("widget_11");
        widget_11->setGeometry(QRect(230, 30, 41, 41));
        widget_11->setStyleSheet(QString::fromUtf8("image: url(:/res/pic/ic_add_2.png);\n"
"background-color: rgba(255, 255, 255, 0);"));
        widget_12 = new QWidget(widget_6);
        widget_12->setObjectName("widget_12");
        widget_12->setGeometry(QRect(20, 30, 31, 41));
        widget_12->setStyleSheet(QString::fromUtf8("image: url(:/res/pic/\346\220\234\347\264\242.png);\n"
"background-color: rgba(255, 255, 255, 0);"));
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 10, 71, 671));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(40, 41, 45);"));
        widget1 = new QWidget(widget);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(0, 10, 79, 314));
        widget1->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setObjectName("verticalLayout_2");
        widget_2 = new QWidget(widget1);
        widget_2->setObjectName("widget_2");
        widget_2->setMinimumSize(QSize(61, 61));
        widget_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius:30px;\n"
"image: url(:/res/pic/\345\244\251\347\214\253.png);"));

        verticalLayout_2->addWidget(widget_2);

        verticalSpacer_3 = new QSpacerItem(20, 42, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        widget_3 = new QWidget(widget1);
        widget_3->setObjectName("widget_3");
        widget_3->setMinimumSize(QSize(51, 41));
        widget_3->setStyleSheet(QString::fromUtf8("image: url(:/res/pic/Chat.png);"));

        verticalLayout_2->addWidget(widget_3);

        verticalSpacer_2 = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        friendWidget = new QWidget(widget1);
        friendWidget->setObjectName("friendWidget");
        friendWidget->setMinimumSize(QSize(51, 41));
        friendWidget->setStyleSheet(QString::fromUtf8("border-image: url(:/res/pic/\347\224\250\346\210\267.png);"));
        gridLayout = new QGridLayout(friendWidget);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);

        verticalLayout_2->addWidget(friendWidget);

        verticalSpacer = new QSpacerItem(20, 16, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        widget_5 = new QWidget(widget1);
        widget_5->setObjectName("widget_5");
        widget_5->setMinimumSize(QSize(51, 41));
        widget_5->setStyleSheet(QString::fromUtf8("image: url(:/res/pic/3.1 \350\256\276\347\275\256.png);"));

        verticalLayout_2->addWidget(widget_5);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        fileButton->setText(QString());
        sendBut->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "UserName", nullptr));
        searchlineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "             \346\220\234\347\264\242...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
