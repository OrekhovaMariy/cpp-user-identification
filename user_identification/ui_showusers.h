/********************************************************************************
** Form generated from reading UI file 'showusers.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWUSERS_H
#define UI_SHOWUSERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_ShowUsers
{
public:
    QLabel *label_connection;
    QTableView *tableView;

    void setupUi(QDialog *ShowUsers)
    {
        if (ShowUsers->objectName().isEmpty())
            ShowUsers->setObjectName(QString::fromUtf8("ShowUsers"));
        ShowUsers->resize(400, 300);
        QFont font;
        font.setFamily(QString::fromUtf8("Ubuntu Condensed"));
        ShowUsers->setFont(font);
        ShowUsers->setStyleSheet(QString::fromUtf8(""));
        label_connection = new QLabel(ShowUsers);
        label_connection->setObjectName(QString::fromUtf8("label_connection"));
        label_connection->setGeometry(QRect(10, 280, 381, 17));
        tableView = new QTableView(ShowUsers);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(10, 10, 381, 251));

        retranslateUi(ShowUsers);

        QMetaObject::connectSlotsByName(ShowUsers);
    } // setupUi

    void retranslateUi(QDialog *ShowUsers)
    {
        ShowUsers->setWindowTitle(QCoreApplication::translate("ShowUsers", "\320\241\320\277\320\270\321\201\320\276\320\272 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\320\265\320\271", nullptr));
        label_connection->setText(QCoreApplication::translate("ShowUsers", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShowUsers: public Ui_ShowUsers {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWUSERS_H
