#ifndef USERIDENTIFICATION_H
#define USERIDENTIFICATION_H

#include <QMainWindow>
#include <QMap>
#include <QString>
#include <QFile>
#include <QDir>
#include <QDebug>
#include <QString>
#include <QTextStream>
#include "data.h"

QT_BEGIN_NAMESPACE
namespace Ui { class UserIdentification; }
QT_END_NAMESPACE

class UserIdentification : public QMainWindow
{
    Q_OBJECT

public:
    UserIdentification(QWidget *parent = nullptr);
    ~UserIdentification();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::UserIdentification *ui;
    Data users_data;

    void ParseStr (Data* data) {
        QFile File("UsersLoginPassword.txt");
        if (File.open(QIODevice::ReadOnly)){
            QTextStream stream(&File);
            while (stream.atEnd() == false){
                 QString file_data;
                 file_data = stream.readLine();

        QStringList list = file_data.split(' ');
        if(list.size() ==2){
            data->FillData(list[0], list[1]);
        }
        }
    }
        }

    void WriteFile(QString log, QString pass) {
        QFile File("UsersLoginPassword.txt");
        if (File.open(QIODevice::Append | QIODevice::ReadWrite)) {
            QTextStream stream(&File);
            stream << log << " " << pass << "\n";
        }
        File.close();
    }
};

#endif // USERIDENTIFICATION_H
