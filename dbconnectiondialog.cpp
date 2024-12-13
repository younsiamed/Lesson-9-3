#include "dbconnectiondialog.h"
#include "ui_dbconnectiondialog.h"
#include <QMessageBox>

DBConnectionDialog::DBConnectionDialog(QWidget *parent)
    : QDialog(parent),
    ui(new Ui::DBConnectionDialog)
{
    ui->setupUi(this);

    // Connect signals to slots
    connect(ui->okButton, &QPushButton::clicked, this, &DBConnectionDialog::on_okButton_clicked);
    connect(ui->cancelButton, &QPushButton::clicked, this, &DBConnectionDialog::on_cancelButton_clicked);
}

DBConnectionDialog::~DBConnectionDialog()
{
    delete ui;
}

QString DBConnectionDialog::getHostName() const
{
    return ui->hostNameLineEdit->text();
}

QString DBConnectionDialog::getDatabaseName() const
{
    return ui->databaseNameLineEdit->text();
}

QString DBConnectionDialog::getLogin() const
{
    return ui->loginLineEdit->text();
}

QString DBConnectionDialog::getPassword() const
{
    return ui->passwordLineEdit->text();
}

uint DBConnectionDialog::getPort() const
{
    return ui->portSpinBox->value();
}

void DBConnectionDialog::on_okButton_clicked()
{
    accept();
}

void DBConnectionDialog::on_cancelButton_clicked()
{
    reject();
}
