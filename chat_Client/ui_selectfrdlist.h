/********************************************************************************
** Form generated from reading UI file 'selectfrdlist.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTFRDLIST_H
#define UI_SELECTFRDLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_selectFrdList
{
public:
    QHBoxLayout *horizontalLayout;
    QFrame *frame;
    QLabel *UserName;
    QRadioButton *radioButton;

    void setupUi(QWidget *selectFrdList)
    {
        if (selectFrdList->objectName().isEmpty())
            selectFrdList->setObjectName("selectFrdList");
        selectFrdList->resize(200, 53);
        selectFrdList->setMinimumSize(QSize(200, 0));
        selectFrdList->setMaximumSize(QSize(200, 100));
        horizontalLayout = new QHBoxLayout(selectFrdList);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(-1, 0, -1, 0);
        frame = new QFrame(selectFrdList);
        frame->setObjectName("frame");
        frame->setMinimumSize(QSize(35, 35));
        frame->setMaximumSize(QSize(35, 35));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(frame);

        UserName = new QLabel(selectFrdList);
        UserName->setObjectName("UserName");

        horizontalLayout->addWidget(UserName);

        radioButton = new QRadioButton(selectFrdList);
        radioButton->setObjectName("radioButton");

        horizontalLayout->addWidget(radioButton);


        retranslateUi(selectFrdList);

        QMetaObject::connectSlotsByName(selectFrdList);
    } // setupUi

    void retranslateUi(QWidget *selectFrdList)
    {
        selectFrdList->setWindowTitle(QCoreApplication::translate("selectFrdList", "Form", nullptr));
        UserName->setText(QCoreApplication::translate("selectFrdList", "TextLabel", nullptr));
        radioButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class selectFrdList: public Ui_selectFrdList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTFRDLIST_H
