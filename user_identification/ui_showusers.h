/********************************************************************************
** Form generated from reading UI file 'showusers.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWUSERS_H
#define UI_SHOWUSERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_ShowUsers
{
public:
    QGridLayout *gridLayout;
    QTableWidget *tableWidget;

    void setupUi(QDialog *ShowUsers)
    {
        if (ShowUsers->objectName().isEmpty())
            ShowUsers->setObjectName(QString::fromUtf8("ShowUsers"));
        ShowUsers->resize(400, 300);
        ShowUsers->setStyleSheet(QString::fromUtf8("graund_color: rgb(92, 119, 79)"));
        gridLayout = new QGridLayout(ShowUsers);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tableWidget = new QTableWidget(ShowUsers);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setStyleSheet(QString::fromUtf8("graund_color: rgb(119, 118, 123)"));
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);

        gridLayout->addWidget(tableWidget, 0, 0, 1, 1);


        retranslateUi(ShowUsers);

        QMetaObject::connectSlotsByName(ShowUsers);
    } // setupUi

    void retranslateUi(QDialog *ShowUsers)
    {
        ShowUsers->setWindowTitle(QApplication::translate("ShowUsers", "\320\241\320\277\320\270\321\201\320\276\320\272 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\320\265\320\271", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("ShowUsers", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("ShowUsers", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShowUsers: public Ui_ShowUsers {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWUSERS_H
