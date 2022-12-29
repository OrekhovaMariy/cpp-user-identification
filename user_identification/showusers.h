#ifndef SHOWUSERS_H
#define SHOWUSERS_H

#include <QDialog>
#include "data.h"

namespace Ui {
class ShowUsers;
}

class ShowUsers : public QDialog
{
    Q_OBJECT

public:
    explicit ShowUsers(Data* d, QWidget *parent = nullptr);
    ~ShowUsers();

private:
    Ui::ShowUsers *ui;
    Data* users_data;
};

#endif // SHOWUSERS_H
