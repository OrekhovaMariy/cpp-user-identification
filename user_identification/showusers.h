#ifndef SHOWUSERS_H
#define SHOWUSERS_H

#include <QDialog>
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>
#include "useridentification.h"

namespace Ui {
class ShowUsers;
}

class ShowUsers : public QDialog
{
    Q_OBJECT

public:
    explicit ShowUsers(QWidget *parent = nullptr);
    ~ShowUsers();

private:
    Ui::ShowUsers *ui;
    QSqlDatabase* log_pass;
};

#endif // SHOWUSERS_H
