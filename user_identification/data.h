#ifndef DATA_H
#define DATA_H
#include <QMap>

class Data {
private:
    QMap<QString, QString> login_pass;
    QString current_login;
    QString current_pass;
public:
    void AddNewUser(const QString l, const QString p) {
        current_login = l;
        current_pass = p;
    }
    void FillData (const QString l, const QString p) {
        login_pass[l]=p;
    }
    QMap<QString, QString> GetUsers() const {
        return login_pass;
    }
    QString GetCurrentPass() const {
        return current_pass;
    }
    QString GetCurrentLogin() const {
        return current_login;
    }
};




#endif // DATA_H
