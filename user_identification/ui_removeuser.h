/********************************************************************************
** Form generated from reading UI file 'removeuser.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOVEUSER_H
#define UI_REMOVEUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RemoveUser
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *login;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLineEdit *password;
    QPushButton *pushButton;
    QLabel *label_connection;

    void setupUi(QDialog *RemoveUser)
    {
        if (RemoveUser->objectName().isEmpty())
            RemoveUser->setObjectName(QString::fromUtf8("RemoveUser"));
        RemoveUser->resize(267, 207);
        RemoveUser->setStyleSheet(QString::fromUtf8(""));
        layoutWidget = new QWidget(RemoveUser);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 20, 201, 151));
        verticalLayout_4 = new QVBoxLayout(layoutWidget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8(""));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        login = new QLineEdit(layoutWidget);
        login->setObjectName(QString::fromUtf8("login"));
        login->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(login);


        verticalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8(""));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_2);

        password = new QLineEdit(layoutWidget);
        password->setObjectName(QString::fromUtf8("password"));
        password->setStyleSheet(QString::fromUtf8(""));
        password->setEchoMode(QLineEdit::Password);

        verticalLayout_2->addWidget(password);


        verticalLayout_3->addLayout(verticalLayout_2);


        verticalLayout_4->addLayout(verticalLayout_3);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout_4->addWidget(pushButton);

        label_connection = new QLabel(RemoveUser);
        label_connection->setObjectName(QString::fromUtf8("label_connection"));
        label_connection->setGeometry(QRect(10, 190, 251, 17));

        retranslateUi(RemoveUser);

        QMetaObject::connectSlotsByName(RemoveUser);
    } // setupUi

    void retranslateUi(QDialog *RemoveUser)
    {
        RemoveUser->setWindowTitle(QCoreApplication::translate("RemoveUser", "\320\243\320\264\320\260\320\273\320\265\320\275\320\270\320\265 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217", nullptr));
        label->setText(QCoreApplication::translate("RemoveUser", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        login->setText(QString());
        label_2->setText(QCoreApplication::translate("RemoveUser", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        password->setText(QString());
        pushButton->setText(QCoreApplication::translate("RemoveUser", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        label_connection->setText(QCoreApplication::translate("RemoveUser", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RemoveUser: public Ui_RemoveUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOVEUSER_H
