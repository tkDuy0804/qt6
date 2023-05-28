#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QMessageBox>
#include <QString>
#include <QDebug>

QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void on_checkable_button_clicked();

    void on_is_checked_button_clicked();

    void on_auto_repeat_button_clicked();

    void on_toggle_button_1_clicked();

    void on_pushButton_5_clicked();

    void on_toggle_button_2_clicked();

    void on_quit_button_clicked();

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
