#ifndef SUGGESTTOADD_H
#define SUGGESTTOADD_H

#include <QDialog>
#include "data.h"

namespace Ui {
class SuggestToAdd;
}

class SuggestToAdd : public QDialog
{
    Q_OBJECT

public:
    explicit SuggestToAdd(Data* d, QWidget *parent = nullptr);
    ~SuggestToAdd();

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::SuggestToAdd *ui;
    Data* users_data;
};

#endif // SUGGESTTOADD_H
