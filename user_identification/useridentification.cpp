#include "useridentification.h"
#include "ui_useridentification.h"

#include "suggesttoadd.h"
#include "data.h"
#include "addnewusers.h"

#include <QMessageBox>

UserIdentification::UserIdentification( QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::UserIdentification)
{
    ui->setupUi(this);
}

UserIdentification::~UserIdentification()
{
    delete ui;
}


void UserIdentification::on_pushButton_clicked()
{
    QString login = ui->login->text();
    QString pass = ui->password->text();
ParseStr(&users_data);
     QMap<QString, QString> login_pass = users_data.GetUsers();
    if (login_pass.find(login) != login_pass.end() && pass==login_pass[login]) {
        QMessageBox::information(this, "Идентификация пользователя", "Идентификация прошла успешно");
    } else if (login_pass.find(login) != login_pass.end() && pass!=login_pass[login]){
QMessageBox::warning(this, "Идентификация пользователя", "Пароль или логин введен неверно");
    } else if (login_pass.find(login) == login_pass.end()){
        // в рамках информационной безопасности данный вариант использовать не желательно, чтобы не распространять
        // информацию о наличии пользователя с данным логином
        SuggestToAdd win_of_suggest_to_add(&users_data);
        win_of_suggest_to_add.setModal(true);
        win_of_suggest_to_add.exec();
        QString log = users_data.GetCurrentLogin();
        QString pass = users_data.GetCurrentPass();
if(!log.isEmpty() && !pass.isEmpty()) {
WriteFile(log, pass);
    }
    }
// вариант, который можно использовать вместо предыдущего
// QMessageBox::warning(this, "Идентификация пользователя", "Пароль или логин введен неверно");
}


void UserIdentification::on_pushButton_2_clicked()
{
    AddNewUsers add_new_user(&users_data);
    add_new_user.setModal(true);
    add_new_user.exec();
    QString log = users_data.GetCurrentLogin();
    QString pass = users_data.GetCurrentPass();
if(!log.isEmpty() && !pass.isEmpty()) {
WriteFile(log, pass);
}
}

