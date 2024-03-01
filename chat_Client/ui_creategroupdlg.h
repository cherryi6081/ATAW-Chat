/********************************************************************************
** Form generated from reading UI file 'creategroupdlg.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEGROUPDLG_H
#define UI_CREATEGROUPDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreateGroupDlg
{
public:
    QListWidget *SelectedListWidget;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit;
    QListWidget *listWidget;

    void setupUi(QWidget *CreateGroupDlg)
    {
        if (CreateGroupDlg->objectName().isEmpty())
            CreateGroupDlg->setObjectName("CreateGroupDlg");
        CreateGroupDlg->resize(400, 332);
        SelectedListWidget = new QListWidget(CreateGroupDlg);
        SelectedListWidget->setObjectName("SelectedListWidget");
        SelectedListWidget->setGeometry(QRect(200, 40, 200, 260));
        SelectedListWidget->setMinimumSize(QSize(0, 260));
        SelectedListWidget->setMaximumSize(QSize(200, 260));
        label = new QLabel(CreateGroupDlg);
        label->setObjectName("label");
        label->setGeometry(QRect(230, 10, 130, 18));
        pushButton = new QPushButton(CreateGroupDlg);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(200, 306, 80, 26));
        pushButton_2 = new QPushButton(CreateGroupDlg);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(300, 306, 80, 26));
        lineEdit = new QLineEdit(CreateGroupDlg);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(10, 10, 161, 26));
        listWidget = new QListWidget(CreateGroupDlg);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(0, 40, 200, 260));
        listWidget->setMinimumSize(QSize(200, 260));
        listWidget->setMaximumSize(QSize(200, 200));

        retranslateUi(CreateGroupDlg);

        QMetaObject::connectSlotsByName(CreateGroupDlg);
    } // setupUi

    void retranslateUi(QWidget *CreateGroupDlg)
    {
        CreateGroupDlg->setWindowTitle(QCoreApplication::translate("CreateGroupDlg", "Form", nullptr));
#if QT_CONFIG(statustip)
        SelectedListWidget->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(accessibility)
        SelectedListWidget->setAccessibleDescription(QString());
#endif // QT_CONFIG(accessibility)
        label->setText(QCoreApplication::translate("CreateGroupDlg", "\350\257\267\345\213\276\351\200\211\350\246\201\346\267\273\345\212\240\347\232\204\350\201\224\347\263\273\344\272\272", nullptr));
        pushButton->setText(QCoreApplication::translate("CreateGroupDlg", "\347\241\256\345\256\232", nullptr));
        pushButton_2->setText(QCoreApplication::translate("CreateGroupDlg", "\345\217\226\346\266\210", nullptr));
#if QT_CONFIG(tooltip)
        lineEdit->setToolTip(QCoreApplication::translate("CreateGroupDlg", "\346\220\234\347\264\242", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class CreateGroupDlg: public Ui_CreateGroupDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEGROUPDLG_H
