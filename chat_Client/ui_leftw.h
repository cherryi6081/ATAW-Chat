/********************************************************************************
** Form generated from reading UI file 'leftw.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEFTW_H
#define UI_LEFTW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "mybutton.h"

QT_BEGIN_NAMESPACE

class Ui_leftw
{
public:
    QWidget *widget_4;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_5;
    MyButton *btn_chat;
    MyButton *btn_contact;
    QWidget *widget_5;
    QSpacerItem *verticalSpacer_6;
    MyButton *btn_settings;
    MyButton *weatherButton;

    void setupUi(QWidget *leftw)
    {
        if (leftw->objectName().isEmpty())
            leftw->setObjectName("leftw");
        leftw->resize(81, 832);
        leftw->setMinimumSize(QSize(81, 832));
        leftw->setStyleSheet(QString::fromUtf8(""));
        widget_4 = new QWidget(leftw);
        widget_4->setObjectName("widget_4");
        widget_4->setGeometry(QRect(0, 70, 79, 341));
        widget_4->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 255);"));
        gridLayout = new QGridLayout(widget_4);
        gridLayout->setObjectName("gridLayout");
        verticalSpacer_4 = new QSpacerItem(20, 42, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 2, 0, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_5, 4, 0, 1, 1);


        QStringList tmp;
        tmp << ":/res/pic/Chat.png"
            << ":/Icons/MainWindow/chat2.png"
            << ":/res/pic/Chat.png";
        btn_chat = new MyButton(nullptr,tmp,QSize(63,41));
//        btn_chat = new MyButton(widget_4);
        btn_chat->setObjectName("btn_chat");
        btn_chat->setMinimumSize(QSize(51, 41));
        btn_chat->setStyleSheet(QString::fromUtf8("image: url(:/res/pic/Chat.png);"));

        gridLayout->addWidget(btn_chat, 3, 0, 1, 1);

        tmp.clear();
        tmp << ":/res/pic/\347\224\250\346\210\267.png"
            << ":/Icons/MainWindow/chat2.png"
            << ":/res/pic/\347\224\250\346\210\267.png";
        btn_contact = new MyButton(nullptr,tmp,QSize(63,41));
//        btn_contact = new MyButton(widget_4);
        btn_contact->setObjectName("btn_contact");
        btn_contact->setMinimumSize(QSize(51, 41));
        btn_contact->setStyleSheet(QString::fromUtf8("image: url(:/res/pic/\347\224\250\346\210\267.png);"));

        gridLayout->addWidget(btn_contact, 5, 0, 1, 1);

        widget_5 = new QWidget(widget_4);
        widget_5->setObjectName("widget_5");
        widget_5->setMinimumSize(QSize(61, 61));
        widget_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius:30px;\n"
"image: url(:/res/pic/\345\244\251\347\214\253.png);"));

        gridLayout->addWidget(widget_5, 1, 0, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 16, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_6, 6, 0, 1, 1);

        tmp.clear();
        tmp << ":/res/pic/3.1 \350\256\276\347\275\256.png"
            << ":/Icons/MainWindow/chat2.png"
            << ":/res/pic/3.1 \350\256\276\347\275\256.png";
        btn_settings = new MyButton(nullptr,tmp,QSize(63,41));
//        btn_settings = new MyButton(widget_4);
        btn_settings->setObjectName("btn_settings");
        btn_settings->setMinimumSize(QSize(51, 41));
        btn_settings->setStyleSheet(QString::fromUtf8("image: url(:/res/pic/3.1 \350\256\276\347\275\256.png);"));

        gridLayout->addWidget(btn_settings, 7, 0, 1, 1);

        tmp.clear();
        tmp << ":/icons/weather_icons/duoyun.png"
            << ":/icons/weather_icons/duoyun.png"
            << ":/icons/weather_icons/duoyun.png";
        btn_settings = new MyButton(nullptr,tmp,QSize(63,41));
//        weatherButton = new MyButton(widget_4);
        weatherButton->setObjectName("weatherButton");
        weatherButton->setMinimumSize(QSize(30, 35));
        weatherButton->setStyleSheet(QString::fromUtf8("border-image: url(:/icons/weather_icons/duoyun.png);\n"
""));

        gridLayout->addWidget(weatherButton, 0, 0, 1, 1);


        retranslateUi(leftw);

        QMetaObject::connectSlotsByName(leftw);
    } // setupUi

    void retranslateUi(QWidget *leftw)
    {
        leftw->setWindowTitle(QCoreApplication::translate("leftw", "Form", nullptr));
        btn_chat->setText(QString());
        btn_contact->setText(QString());
        btn_settings->setText(QString());
        weatherButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class leftw: public Ui_leftw {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEFTW_H
