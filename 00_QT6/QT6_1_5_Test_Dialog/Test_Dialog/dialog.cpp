#include "dialog.h"
#include "./ui_dialog.h"

Dialog::Dialog(QWidget *parent): QDialog(parent), ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_OK_clicked()
{
    QMessageBox::information(this, "Confirmation", "Ok");
    qInfo() << this->ui->pushButton_OK->text();
    this->accept();
}

void Dialog::on_pushButton_Cancel_clicked()
{
    QMessageBox::information(this, "Confirmation", "Cancel");
    qInfo() << this->ui->pushButton_Cancel->text();
    this->reject();
}

