#include "addnewusers.h"
#include "ui_addnewusers.h"

#include "data.h"
#include <QMessageBox>

AddNewUsers::AddNewUsers(Data* d, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddNewUsers),
    users_data(d)
{
    ui->setupUi(this);
}

AddNewUsers::~AddNewUsers()
{
    delete ui;
}

void AddNewUsers::on_add_new_user_clicked()
{
    QString log = ui->add_login->text();
    QString pass = ui->pass_for_add->text();
    QString pass_confirm = ui->pass_for_add_confirm-> text();
    if(log.isEmpty()){
        QMessageBox::warning(this, "Добавление пользователя", "Введите логин");
    } else {
        if (pass!= pass_confirm) {
            QMessageBox::warning(this, "Добавление пользователя", "Подтверждение пароля не выполнено. Пожалуста, введите одинаковые данные в поле "
                                                                  "\"Введите пароль\" и в поле \"Подтвердите пароль\".");
        } else if (pass ==""){
            QMessageBox::warning(this, "Добавление пользователя", "Пароль должен содержать несколько символов.");
        } else{
auto data = users_data->GetUsers();
            if (data.find(log)== data.end()) {
            users_data->AddNewUser(log, pass);
            QApplication::activeModalWidget()->close();
            } else {
                QMessageBox::warning(this, "Добавление пользователя", "Пользователь с таким логином уже существует.");
            }
        }
    }
}
