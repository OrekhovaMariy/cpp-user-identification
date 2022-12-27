/********************************************************************************
** Form generated from reading UI file 'addnewusers.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDNEWUSERS_H
#define UI_ADDNEWUSERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddNewUsers
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *add_login;
    QLineEdit *pass_for_add;
    QLineEdit *pass_for_add_confirm;
    QPushButton *add_new_user;

    void setupUi(QDialog *AddNewUsers)
    {
        if (AddNewUsers->objectName().isEmpty())
            AddNewUsers->setObjectName(QString::fromUtf8("AddNewUsers"));
        AddNewUsers->resize(400, 300);
        layoutWidget = new QWidget(AddNewUsers);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 50, 305, 124));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        add_login = new QLineEdit(layoutWidget);
        add_login->setObjectName(QString::fromUtf8("add_login"));

        verticalLayout_2->addWidget(add_login);

        pass_for_add = new QLineEdit(layoutWidget);
        pass_for_add->setObjectName(QString::fromUtf8("pass_for_add"));

        verticalLayout_2->addWidget(pass_for_add);

        pass_for_add_confirm = new QLineEdit(layoutWidget);
        pass_for_add_confirm->setObjectName(QString::fromUtf8("pass_for_add_confirm"));

        verticalLayout_2->addWidget(pass_for_add_confirm);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);

        add_new_user = new QPushButton(layoutWidget);
        add_new_user->setObjectName(QString::fromUtf8("add_new_user"));

        verticalLayout_3->addWidget(add_new_user);


        retranslateUi(AddNewUsers);

        QMetaObject::connectSlotsByName(AddNewUsers);
    } // setupUi

    void retranslateUi(QDialog *AddNewUsers)
    {
        AddNewUsers->setWindowTitle(QApplication::translate("AddNewUsers", "Dialog", nullptr));
        label->setText(QApplication::translate("AddNewUsers", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        label_2->setText(QApplication::translate("AddNewUsers", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\277\320\260\321\200\320\276\320\273\321\214", nullptr));
        label_3->setText(QApplication::translate("AddNewUsers", "\320\237\320\276\320\264\321\202\320\262\320\265\321\200\320\264\320\270\321\202\320\265 \320\277\320\260\321\200\320\276\320\273\321\214", nullptr));
        add_new_user->setText(QApplication::translate("AddNewUsers", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddNewUsers: public Ui_AddNewUsers {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDNEWUSERS_H
