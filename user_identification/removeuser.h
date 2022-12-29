#ifndef REMOVEUSER_H
#define REMOVEUSER_H

#include <QDialog>
#include "data.h"

namespace Ui {
class RemoveUser;
}

class RemoveUser : public QDialog
{
    Q_OBJECT

public:
    explicit RemoveUser(Data* d, QWidget *parent = nullptr);
    ~RemoveUser();

private slots:
    void on_pushButton_clicked();

private:
    Ui::RemoveUser *ui;
    Data* users_data;
};

#endif // REMOVEUSER_H
