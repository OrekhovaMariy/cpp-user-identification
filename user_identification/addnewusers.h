#ifndef ADDNEWUSERS_H
#define ADDNEWUSERS_H

#include <QDialog>
#include "data.h"

namespace Ui {
class AddNewUsers;
}

class AddNewUsers : public QDialog
{
    Q_OBJECT

public:
    explicit AddNewUsers(Data* d, QWidget *parent = nullptr);
    ~AddNewUsers();

private slots:
    void on_add_new_user_clicked();

private:
    Ui::AddNewUsers *ui;
    Data* users_data;
};

#endif // ADDNEWUSERS_H
