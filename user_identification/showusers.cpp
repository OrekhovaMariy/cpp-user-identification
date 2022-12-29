#include "showusers.h"
#include "ui_showusers.h"

ShowUsers::ShowUsers(Data* d, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ShowUsers),
    users_data(d)
{
    ui->setupUi(this);

    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeMode::Stretch);

   QMap<QString, QString> login_pass = users_data->GetUsers();
auto it = login_pass.begin();
ui->tableWidget->setRowCount(login_pass.size());
   for(int i = 0; i < login_pass.size(); i++){
       ui->tableWidget->setItem(i, 0, new QTableWidgetItem(it.key()));
       ui->tableWidget->setItem(i, 1, new QTableWidgetItem(it.value()));
       it++;
   }
}

ShowUsers::~ShowUsers()
{
    delete ui;
}
