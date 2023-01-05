#include "showusers.h"
#include "ui_showusers.h"

ShowUsers::ShowUsers(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ShowUsers)
{
    ui->setupUi(this);

    UserIdentification conn;

    if (!conn.connectOpen()){
        ui->label_connection->setText("База данных не доступна!");
    } else {
        ui->label_connection->setText("Соединение с базой данных установлено.");
    }

    QSqlQueryModel * modal = new QSqlQueryModel();
    conn.connectOpen();
    QSqlQuery * qry = new QSqlQuery(conn.log_pass);
    qry->prepare("select * from users");
    qry->exec();
    modal->setQuery(*qry);
    ui->tableView->setModel(modal);

    conn.connectClose();
    qDebug() << (modal->rowCount());
}

ShowUsers::~ShowUsers()
{
    delete ui;
}

