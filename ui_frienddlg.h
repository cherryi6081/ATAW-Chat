/********************************************************************************
** Form generated from reading UI file 'frienddlg.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRIENDDLG_H
#define UI_FRIENDDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FriendDlg
{
public:
    QGridLayout *gridLayout;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_2;
    QTreeWidget *treeWidget;
    QWidget *tab_2;

    void setupUi(QWidget *FriendDlg)
    {
        if (FriendDlg->objectName().isEmpty())
            FriendDlg->setObjectName("FriendDlg");
        FriendDlg->resize(412, 501);
        gridLayout = new QGridLayout(FriendDlg);
        gridLayout->setObjectName("gridLayout");
        lineEdit = new QLineEdit(FriendDlg);
        lineEdit->setObjectName("lineEdit");

        gridLayout->addWidget(lineEdit, 0, 0, 1, 1);

        pushButton = new QPushButton(FriendDlg);
        pushButton->setObjectName("pushButton");

        gridLayout->addWidget(pushButton, 0, 1, 1, 1);

        tabWidget = new QTabWidget(FriendDlg);
        tabWidget->setObjectName("tabWidget");
        tab = new QWidget();
        tab->setObjectName("tab");
        gridLayout_2 = new QGridLayout(tab);
        gridLayout_2->setObjectName("gridLayout_2");
        treeWidget = new QTreeWidget(tab);
        treeWidget->headerItem()->setText(0, QString());
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem1);
        QTreeWidgetItem *__qtreewidgetitem2 = new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem2);
        treeWidget->setObjectName("treeWidget");

        gridLayout_2->addWidget(treeWidget, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        tabWidget->addTab(tab_2, QString());

        gridLayout->addWidget(tabWidget, 1, 0, 1, 2);


        retranslateUi(FriendDlg);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(FriendDlg);
    } // setupUi

    void retranslateUi(QWidget *FriendDlg)
    {
        FriendDlg->setWindowTitle(QCoreApplication::translate("FriendDlg", "Form", nullptr));
        lineEdit->setText(QCoreApplication::translate("FriendDlg", "\346\220\234\347\264\242", nullptr));
        pushButton->setText(QCoreApplication::translate("FriendDlg", "PushButton", nullptr));

        const bool __sortingEnabled = treeWidget->isSortingEnabled();
        treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->topLevelItem(0);
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("FriendDlg", "\351\273\230\350\256\244\345\210\206\347\273\204", nullptr));
        QTreeWidgetItem *___qtreewidgetitem1 = ___qtreewidgetitem->child(0);
        ___qtreewidgetitem1->setText(0, QCoreApplication::translate("FriendDlg", "username", nullptr));
        QTreeWidgetItem *___qtreewidgetitem2 = treeWidget->topLevelItem(1);
        ___qtreewidgetitem2->setText(0, QCoreApplication::translate("FriendDlg", "\351\273\221\345\220\215\345\215\225", nullptr));
        QTreeWidgetItem *___qtreewidgetitem3 = ___qtreewidgetitem2->child(0);
        ___qtreewidgetitem3->setText(0, QCoreApplication::translate("FriendDlg", "\346\226\260\345\273\272\345\255\220\351\241\271\347\233\256", nullptr));
        QTreeWidgetItem *___qtreewidgetitem4 = treeWidget->topLevelItem(2);
        ___qtreewidgetitem4->setText(0, QCoreApplication::translate("FriendDlg", "\346\210\221\347\232\204\345\245\275\345\217\213", nullptr));
        treeWidget->setSortingEnabled(__sortingEnabled);

        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("FriendDlg", "Tab 1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("FriendDlg", "Tab 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FriendDlg: public Ui_FriendDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRIENDDLG_H
