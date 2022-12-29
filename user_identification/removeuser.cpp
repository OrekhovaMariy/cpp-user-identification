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
    QString login = ui->login->text();
    QString pass = ui->password->text();
    if (login != users_data->GetCurrentLogin() || pass!=users_data->GetCurrentPass()) {
        QMessageBox::warning(this, "Удаление пользователя", "Вы можете удалить только свои данные.");
    } else {
       users_data->RemoveUser(login);
       QMessageBox::information(this, "Удаление пользователя", "Данные пользователя успешно удалены.");
   QApplication::exit(-1);
}
}


