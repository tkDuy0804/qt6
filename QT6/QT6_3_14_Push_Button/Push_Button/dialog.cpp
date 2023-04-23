
#include "dialog.h"
#include "./ui_dialog.h"


Dialog::Dialog(QWidget *parent) : QDialog(parent), ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->checkable_button->setChecked(false);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_checkable_button_clicked()
{
    qDebug() << ui->checkable_button->isChecked();
}


void Dialog::on_is_checked_button_clicked()
{
    QString message{};
    if(ui->checkable_button->isChecked())
    {
        message = "Checked";
    }
    else
    {
        message = "Not checked";
    }

    QMessageBox::information(this, "Check status", message);
}


void Dialog::on_auto_repeat_button_clicked()
{

}


void Dialog::on_toggle_button_1_clicked()
{

}


void Dialog::on_pushButton_5_clicked()
{

}


void Dialog::on_toggle_button_2_clicked()
{

}


void Dialog::on_quit_button_clicked()
{

}

