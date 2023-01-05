#ifndef REMOVEUSER_H
#define REMOVEUSER_H

#include <QDialog>
#include <QtSql>
#include "useridentification.h"

namespace Ui {
class RemoveUser;
}

class RemoveUser : public QDialog
{
    Q_OBJECT

public:
    explicit RemoveUser(QWidget *parent = nullptr);
    ~RemoveUser();

private slots:
    void on_pushButton_clicked();

private:
    Ui::RemoveUser *ui;

};

#endif // REMOVEUSER_H
