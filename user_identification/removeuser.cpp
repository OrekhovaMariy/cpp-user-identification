#include <QMessageBox>

#include "removeuser.h"
#include "ui_removeuser.h"

RemoveUser::RemoveUser(Data* d, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RemoveUser),
    users_data(d)
{
    ui->setupUi(this);
}

RemoveUser::~RemoveUser()
{
    delete ui;
}

void RemoveUser::on_pushButton_clicked()
{
    QMap<QString, QString> login_pass = users_data->GetUsers();
    QString login = ui->login->text();
    QString pass = ui->password->text();
    if (login_pass.find(login) == login_pass.end() || login_pass[login] != pass) {
        QMessageBox::warning(this, "Удаление пользователя", "Логин и/или пароль введены неверно.");
    } else {
       users_data->RemoveUser(login);
       QMessageBox::information(this, "Удаление пользователя", "Данные пользователя успешно удалены.");
    }
}


