#ifndef USERIDENTIFICATION_H
#define USERIDENTIFICATION_H

#include <QMainWindow>
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>
#include <QMap>
#include <QString>
#include <QFile>
#include <QDir>
#include <QDebug>
#include <QString>
#include <QTextStream>

QT_BEGIN_NAMESPACE

namespace Ui { class UserIdentification; }

QT_END_NAMESPACE

class UserIdentification : public QMainWindow
{
    Q_OBJECT

public:
    UserIdentification(QWidget *parent = nullptr);
    ~UserIdentification();

    QSqlDatabase log_pass;
    void connectClose();
    bool connectOpen();

private slots:

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::UserIdentification *ui;
    bool is_authorized = false;
};

#endif // USERIDENTIFICATION_H
