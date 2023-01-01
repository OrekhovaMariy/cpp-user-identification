/********************************************************************************
** Form generated from reading UI file 'addnewusers.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
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
#include <QtWidgets/QSpacerItem>
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
    QLineEdit *add_login;
    QLabel *label_2;
    QLineEdit *pass_for_add;
    QLabel *label_3;
    QLineEdit *pass_for_add_confirm;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QPushButton *add_new_user;

    void setupUi(QDialog *AddNewUsers)
    {
        if (AddNewUsers->objectName().isEmpty())
            AddNewUsers->setObjectName(QString::fromUtf8("AddNewUsers"));
        AddNewUsers->resize(400, 300);
        AddNewUsers->setStyleSheet(QString::fromUtf8(""));
        layoutWidget = new QWidget(AddNewUsers);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 50, 305, 199));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8(""));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        add_login = new QLineEdit(layoutWidget);
        add_login->setObjectName(QString::fromUtf8("add_login"));
        add_login->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(add_login);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8(""));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        pass_for_add = new QLineEdit(layoutWidget);
        pass_for_add->setObjectName(QString::fromUtf8("pass_for_add"));
        pass_for_add->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(pass_for_add);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8(""));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_3);

        pass_for_add_confirm = new QLineEdit(layoutWidget);
        pass_for_add_confirm->setObjectName(QString::fromUtf8("pass_for_add_confirm"));
        pass_for_add_confirm->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(pass_for_add_confirm);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));

        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        add_new_user = new QPushButton(layoutWidget);
        add_new_user->setObjectName(QString::fromUtf8("add_new_user"));

        verticalLayout_3->addWidget(add_new_user);


        retranslateUi(AddNewUsers);

        QMetaObject::connectSlotsByName(AddNewUsers);
    } // setupUi

    void retranslateUi(QDialog *AddNewUsers)
    {
        AddNewUsers->setWindowTitle(QCoreApplication::translate("AddNewUsers", "\320\224\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217", nullptr));
        label->setText(QCoreApplication::translate("AddNewUsers", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        add_login->setText(QString());
        label_2->setText(QCoreApplication::translate("AddNewUsers", "\320\243\321\201\321\202\320\260\320\275\320\276\320\262\320\270\321\202\321\214 \320\277\320\260\321\200\320\276\320\273\321\214", nullptr));
        pass_for_add->setText(QString());
        label_3->setText(QCoreApplication::translate("AddNewUsers", "\320\237\320\276\320\262\321\202\320\276\321\200\320\270\321\202\321\214 \320\277\320\260\321\200\320\276\320\273\321\214", nullptr));
        pass_for_add_confirm->setText(QString());
        add_new_user->setText(QCoreApplication::translate("AddNewUsers", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddNewUsers: public Ui_AddNewUsers {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDNEWUSERS_H
