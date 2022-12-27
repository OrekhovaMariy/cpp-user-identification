/********************************************************************************
** Form generated from reading UI file 'suggesttoadd.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUGGESTTOADD_H
#define UI_SUGGESTTOADD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_SuggestToAdd
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *SuggestToAdd)
    {
        if (SuggestToAdd->objectName().isEmpty())
            SuggestToAdd->setObjectName(QString::fromUtf8("SuggestToAdd"));
        SuggestToAdd->resize(374, 292);
        buttonBox = new QDialogButtonBox(SuggestToAdd);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(50, 110, 241, 241));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(SuggestToAdd);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 30, 331, 21));
        label_2 = new QLabel(SuggestToAdd);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 70, 311, 21));

        retranslateUi(SuggestToAdd);
        QObject::connect(buttonBox, SIGNAL(accepted()), SuggestToAdd, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SuggestToAdd, SLOT(reject()));

        QMetaObject::connectSlotsByName(SuggestToAdd);
    } // setupUi

    void retranslateUi(QDialog *SuggestToAdd)
    {
        SuggestToAdd->setWindowTitle(QApplication::translate("SuggestToAdd", "SuggestToAdd", nullptr));
        label->setText(QApplication::translate("SuggestToAdd", "\320\237\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\214 \321\201 \321\202\320\260\320\272\320\270\320\274 \320\273\320\276\320\263\320\270\320\275\320\276\320\274 \320\276\321\202\321\201\321\203\321\202\321\201\321\202\320\262\321\203\320\265\321\202.", nullptr));
        label_2->setText(QApplication::translate("SuggestToAdd", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\275\320\276\320\262\320\276\320\263\320\276 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SuggestToAdd: public Ui_SuggestToAdd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUGGESTTOADD_H
