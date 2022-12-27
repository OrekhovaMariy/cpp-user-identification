#include "useridentification.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    UserIdentification w;
    w.show();
    return a.exec();
}
