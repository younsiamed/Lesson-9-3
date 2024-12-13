#include <QApplication>
#include "dbconnectiondialog.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    DBConnectionDialog dialog;
    if (dialog.exec() == QDialog::Accepted) {
        // После успешного ввода данных
        QString host = dialog.getHostName();
        QString dbName = dialog.getDatabaseName();
        QString login = dialog.getLogin();
        QString password = dialog.getPassword();
        uint port = dialog.getPort();

        // Здесь можно подключиться к базе данных
        qDebug() << "Host:" << host << "DB:" << dbName << "Login:" << login << "Port:" << port;
    }

    return a.exec();
}
