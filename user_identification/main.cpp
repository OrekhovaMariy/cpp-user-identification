#include "useridentification.h"

#include <QApplication>
#include <QProcess>

int main(int argc, char *argv[])
{
    //приложение перезапуститься, если был произведен принудительный выход из приложения с кодом -1
    //если приложение просто закрыть на х, то оно закроется
     QApplication a(argc, argv);
     UserIdentification w;
     w.show();
     int returncode = a.exec();
     if(returncode == -1) {
         QProcess* proc = new QProcess();
         proc->start(QApplication::applicationFilePath());
     }
return returncode;
}
