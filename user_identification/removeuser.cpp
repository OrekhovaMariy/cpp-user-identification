#include <QMessageBox>

#include "removeuser.h"
#include "ui_removeuser.h"

RemoveUser::RemoveUser(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RemoveUser)
{
    ui->setupUi(this);

    UserIdentification conn;
    if (!conn.connectOpen()){
        ui->label_connection->setText("База данных не доступна!");
    } else {
        ui->label_connection->setText("Соединение с базой данных установлено.");
    }
}

RemoveUser::~RemoveUser()
{
    delete ui;
}

void RemoveUser::on_pushButton_clicked()
{
    UserIdentification conn;
    QString log = ui->login->text();
    QString pass = ui->password->text();
    if(!conn.connectOpen()) {
        qDebug() << "Ошибка при подключении к базе данных";
        return;
    }
        conn.connectOpen();
        QSqlQuery qry;

        qry.prepare("select * from users where login='"+log+"' and password='"+pass+"'");

        if (qry.exec())
        {
            int count=0;
            while (qry.next()){
                count++;
            }
            if (count < 1){
               QMessageBox::warning(this, "Удаление пользователя", "Логин и/или пароль введены неверно.");

               conn.connectClose();
               QApplication::exit(-1);
            } else {
                QSqlQuery qury;

                qury.prepare("delete from users where login='"+log+"'");
                if (qury.exec()) {
                    QMessageBox::information(this, "Удаление пользователя", "Данные пользователя успешно удалены.");
                    conn.connectClose();
                    QApplication::exit(-1);
                }
            }
        }
    }




