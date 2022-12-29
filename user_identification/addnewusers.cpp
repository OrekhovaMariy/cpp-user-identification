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

bool UncorrectWord (const QString str) {
    for (const auto& ch: str){
        if(ch > '~' || ch <=' '){
            return true;
        }
    }
    return false;
}

void AddNewUsers::on_add_new_user_clicked()
{
    QString log = ui->add_login->text();
    QString pass = ui->pass_for_add->text();
    QString pass_confirm = ui->pass_for_add_confirm-> text();
        auto data = users_data->GetUsers();
        if (data.find(log)!= data.end()) {
            QMessageBox::warning(this, "Добавление пользователя", "Пользователь с таким логином уже существует.");
        } else if(UncorrectWord(log) || UncorrectWord (pass) ) {
                QMessageBox::information(this, "Добавление пользователя", "Логин и пароль должны состоять из следующих символов: 0-9, Aa-Zz и специальных символов, исключая пробел");
            } else if (log.size() != 8) {
                QMessageBox::information(this, "Добавление пользователя", "Логин должен состоять из 8 символов.");
            } else if (pass.size() != 12) {
                QMessageBox::information(this, "Добавление пользователя", "Пароль должен состоять из 12 символов.");
            } else if (pass!= pass_confirm) {
        QMessageBox::warning(this, "Добавление пользователя", "Подтверждение пароля не выполнено. Пожалуста, введите одинаковые данные в поле "
                                                              "\"Установить пароль\" и в поле \"Повторить пароль\".");
    }else {
            users_data->AddNewUser(log, pass);
            QMessageBox::information(this, "Добавление пользователя", "Пользователь успешно добавлен.");
            QApplication::exit(-1);
}
        }



