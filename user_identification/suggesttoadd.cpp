#include "suggesttoadd.h"
#include "ui_suggesttoadd.h"

#include "addnewusers.h"

SuggestToAdd::SuggestToAdd(Data* d, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SuggestToAdd),
    users_data(d)
{
    ui->setupUi(this);
}

SuggestToAdd::~SuggestToAdd()
{
    delete ui;
}

void SuggestToAdd::on_buttonBox_accepted()
{
    hide();
    AddNewUsers add_new_user(users_data);
    add_new_user.setModal(true);
    add_new_user.exec();
}


void SuggestToAdd::on_buttonBox_rejected()
{
    QApplication::activeModalWidget()->close();
}

