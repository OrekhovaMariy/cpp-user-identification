#include "useridentification.h"
#include "ui_useridentification.h"

#include "suggesttoadd.h"
#include "data.h"
#include "addnewusers.h"
#include "removeuser.h"
#include "showusers.h"

#include <QMessageBox>

UserIdentification::UserIdentification( QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::UserIdentification)
{
    ui->setupUi(this);
    ParseStr();
}


UserIdentification::~UserIdentification()
{
    delete ui;
}


void UserIdentification::on_pushButton_clicked()
{
    QString login = ui->login->text();
    QString pass = ui->password->text();
if(login.isEmpty()) {
QMessageBox::warning(this, "Идентификация пользователя", "Введите логин");
} else {
     QMap<QString, QString> login_pass = users_data.GetUsers();
    if (login_pass.find(login) != login_pass.end() && pass==login_pass[login]) {
        QMessageBox::information(this, "Идентификация пользователя", "Идентификация прошла успешно");
        is_authorized = true;
        users_data.AddNewUser(login, pass);
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
}
// вариант, который можно использовать вместо предыдущего, лучше по данным ИТ безопасности
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


void UserIdentification::on_pushButton_3_clicked()
{
    if(is_authorized) {
        setVisible(false);
RemoveUser remove_user (&users_data);
remove_user.setModal(true);
remove_user.exec();
setVisible(true);
ReWriteFile();
    } else {
        QMessageBox::warning(this, "Идентификация пользователя", "Пожалуйста, произведите вход в систему. Введите логин и пароль.");
    }
}


void UserIdentification::on_pushButton_4_clicked()
{
    if(is_authorized) {
    ShowUsers table_of_users(&users_data);
    table_of_users.setModal(true);
    table_of_users.exec();
    } else {
        QMessageBox::warning(this, "Идентификация пользователя", "Пожалуйста, произведите вход в систему. Введите логин и пароль.");
    }
}

