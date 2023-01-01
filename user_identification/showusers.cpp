#include "showusers.h"
#include "ui_showusers.h"

ShowUsers::ShowUsers(Data* d, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ShowUsers),
    users_data(d)
{
    ui->setupUi(this);

    QMap<QString, QString> login_pass = users_data->GetUsers();
    auto it = login_pass.begin();
    model = new QStandardItemModel (login_pass.size(), 2, this);

    ui->tableView->setModel(model);
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeMode::Stretch);
    QModelIndex index;
    for (int col = 0; col < model->columnCount(); col++) {
        for(int row = 0; row < model->rowCount(); row++){
            index = model->index(row, col);
            if (col == 0) {
                model->setData(index, it.key());
            } else if (col ==1){
                model->setData(index, it.value());
            }
        }
    }

    model->setHeaderData(0, Qt::Horizontal, "Логин пользователя");
    model->setHeaderData(1, Qt::Horizontal, "Пароль пользователя");

}

ShowUsers::~ShowUsers()
{
    delete ui;
}
