#include "useridentification.h"
#include "ui_useridentification.h"

#include "addnewusers.h"
#include "removeuser.h"
#include "showusers.h"

#include <QMessageBox>

UserIdentification::UserIdentification( QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::UserIdentification)
{
    ui->setupUi(this);

    if (!connectOpen()){
        ui->statusbar->showMessage("База данных не доступна!");
    } else {
        ui->statusbar->showMessage("Соединение с базой данных установлено.");
    }
}


UserIdentification::~UserIdentification()
{
    delete ui;
}

void UserIdentification::connectClose()
{
    log_pass.close();
    log_pass.removeDatabase(QSqlDatabase::defaultConnection);
}

bool UserIdentification::connectOpen()
{
    log_pass = QSqlDatabase::addDatabase("QSQLITE");
    //путь до sql-таблицы. В моем случае она располагалась на локальном диске
    log_pass.setDatabaseName("/home/mary/DatabaseLogin.db");

    if (!log_pass.open() || log_pass.databaseName().isEmpty()){
        qDebug()<<("База данных не доступна!");
        return false;
    } else {
        qDebug()<<("Соединение с базой данных установлено.");
        return true;
    }
}

// Вход в систему
void UserIdentification::on_pushButton_clicked()
{
    QString log = ui->login->text();
    QString pass = ui->password->text();
    if(!connectOpen()) {
        qDebug() << "Ошибка при подключении к базе данных";
        return;
    } else if(log.isEmpty() || pass.isEmpty()) {
        QMessageBox::warning(this, "Идентификация пользователя", "Введите логин и пароль.");
    } else {

        connectOpen();
        QSqlQuery qry;
        qry.prepare("select * from users where login='"+log+"' and password='"+pass+"'");

        if (qry.exec( ))
        {
            int count=0;
            while (qry.next()){
                count++;
            }
            if (count==1){
                QMessageBox::information(this, "Идентификация пользователя", "Идентификация прошла успешно");
                connectClose();
                is_authorized = true;
            } else
            {
                QMessageBox::warning(this, "Идентификация пользователя", "Пароль или логин введен неверно");
            }
        }
    }
}

// Добавление пользователя
void UserIdentification::on_pushButton_2_clicked()
{
    setVisible(false);
    AddNewUsers add_new_user;
    add_new_user.setModal(true);
    add_new_user.exec();
}

// Удаление пользователя
void UserIdentification::on_pushButton_3_clicked()
{
    setVisible(false);
    RemoveUser remove_user;
    remove_user.setModal(true);
    remove_user.exec();
    setVisible(true);
    QApplication::exit(-1);
}

// Демонстрация данных пользователей
void UserIdentification::on_pushButton_4_clicked()
{
    if(is_authorized) {
        setVisible(false);
        ShowUsers table_of_users;
        table_of_users.setModal(true);
        table_of_users.exec();
        QApplication::exit(-1);
    } else {
        QMessageBox::warning(this, "Идентификация пользователя", "Пожалуйста, произведите вход в систему. Введите логин и пароль и кликните кнопку \"Вход\".");
    }
}

