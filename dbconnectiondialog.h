#ifndef DBCONNECTIONDIALOG_H
#define DBCONNECTIONDIALOG_H

#include <QDialog>

namespace Ui {
class DBConnectionDialog;
}

class DBConnectionDialog : public QDialog
{
    Q_OBJECT

public:
    explicit DBConnectionDialog(QWidget *parent = nullptr);
    ~DBConnectionDialog();

    QString getHostName() const;
    QString getDatabaseName() const;
    QString getLogin() const;
    QString getPassword() const;
    uint getPort() const;

private slots:
    void on_okButton_clicked();
    void on_cancelButton_clicked();

private:
    Ui::DBConnectionDialog *ui;
};

#endif // DBCONNECTIONDIALOG_H
