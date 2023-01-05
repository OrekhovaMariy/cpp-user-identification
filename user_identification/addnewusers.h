#ifndef ADDNEWUSERS_H
#define ADDNEWUSERS_H

#include "useridentification.h"
#include <QDialog>
#include <QtSql>
#include <QtDebug>

namespace Ui {
class AddNewUsers;
}

class AddNewUsers : public QDialog
{
    Q_OBJECT

public:
    explicit AddNewUsers(QWidget *parent = nullptr);
    ~AddNewUsers();

private slots:
    void on_add_new_user_clicked();

private:
    Ui::AddNewUsers *ui;
};

#endif // ADDNEWUSERS_H
