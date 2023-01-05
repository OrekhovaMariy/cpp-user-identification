#include "addnewusers.h"
#include "ui_addnewusers.h"

#include <QMessageBox>

AddNewUsers::AddNewUsers(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddNewUsers)
{
    ui->setupUi(this);

    UserIdentification conn;
    if (!conn.connectOpen()){
        ui->label_connection->setText("База данных не доступна!");
    } else {
        ui->label_connection->setText("Соединение с базой данных установлено.");
    }
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
    UserIdentification conn;
    QString log = ui->add_login->text();
    QString pass = ui->pass_for_add->text();
    QString pass_confirm = ui->pass_for_add_confirm-> text();

    if(!conn.connectOpen()) {
        qDebug() << "Ошибка при подключении к базе данных";
        return;
    }
    conn.connectOpen();
    if (UncorrectWord(log) || UncorrectWord (pass) ) {
        QMessageBox::warning(this, "Добавление пользователя", "Логин и пароль должны состоять из следующих символов: 0-9, Aa-Zz и специальных символов, исключая пробел");
    } else if (log.size() < 8 || pass.size() < 12) {
        QMessageBox::warning(this, "Добавление пользователя", "Логин должен состоять минимум из 8 символов. Пароль должен состоять минимум из 12 символов.");
    } else if (pass!= pass_confirm) {
         QMessageBox::warning(this, "Добавление пользователя", "Подтверждение пароля не выполнено. Пожалуйста, введите одинаковые данные в поле "
                                                                          "\"Установить пароль\" и в поле \"Повторить пароль\".");
    }else {
        QSqlQuery qry;

        qry.prepare("select * from users where login='"+log+"' and password='"+pass+"'");

        if (qry.exec())
        {
            int count=0;
            while (qry.next()){
                count++;
            }
            if (count>=1){
               QMessageBox::warning(this, "Добавление пользователя", "Пользователь с таким логином уже существует.");

               conn.connectClose();
               QApplication::exit(-1);
            } else if (count < 1) {
                QSqlQuery qury;

                qury.prepare("insert into users(login, password) values ('"+log+"', '"+pass+"')");
                if (qury.exec()) {
                    QMessageBox::information(this, "Добавление пользователя", "Пользователь успешно добавлен.");
                    conn.connectClose();
                    QApplication::exit(-1);
                }
            }
        }
    }
}




