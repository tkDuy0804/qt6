/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QPushButton *checkable_button;
    QPushButton *is_checked_button;
    QPushButton *auto_repeat_button;
    QPushButton *toggle_button_1;
    QPushButton *pushButton_5;
    QPushButton *toggle_button_2;
    QPushButton *quit_button;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(281, 136);
        verticalLayout = new QVBoxLayout(Dialog);
        verticalLayout->setObjectName("verticalLayout");
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        checkable_button = new QPushButton(Dialog);
        checkable_button->setObjectName("checkable_button");
        checkable_button->setCheckable(true);
        checkable_button->setAutoDefault(true);

        gridLayout->addWidget(checkable_button, 0, 0, 1, 1);

        is_checked_button = new QPushButton(Dialog);
        is_checked_button->setObjectName("is_checked_button");

        gridLayout->addWidget(is_checked_button, 0, 1, 1, 1);

        auto_repeat_button = new QPushButton(Dialog);
        auto_repeat_button->setObjectName("auto_repeat_button");

        gridLayout->addWidget(auto_repeat_button, 1, 0, 1, 1);

        toggle_button_1 = new QPushButton(Dialog);
        toggle_button_1->setObjectName("toggle_button_1");

        gridLayout->addWidget(toggle_button_1, 1, 1, 1, 1);

        pushButton_5 = new QPushButton(Dialog);
        pushButton_5->setObjectName("pushButton_5");

        gridLayout->addWidget(pushButton_5, 2, 0, 1, 1);

        toggle_button_2 = new QPushButton(Dialog);
        toggle_button_2->setObjectName("toggle_button_2");

        gridLayout->addWidget(toggle_button_2, 2, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        quit_button = new QPushButton(Dialog);
        quit_button->setObjectName("quit_button");

        gridLayout_2->addWidget(quit_button, 1, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_2);


        retranslateUi(Dialog);

        checkable_button->setDefault(true);


        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        checkable_button->setText(QCoreApplication::translate("Dialog", "Checkable", nullptr));
        is_checked_button->setText(QCoreApplication::translate("Dialog", "IsChecked", nullptr));
        auto_repeat_button->setText(QCoreApplication::translate("Dialog", "AutoRepeat", nullptr));
        toggle_button_1->setText(QCoreApplication::translate("Dialog", "Toggle", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Dialog", "Default", nullptr));
        toggle_button_2->setText(QCoreApplication::translate("Dialog", "Toggle", nullptr));
        quit_button->setText(QCoreApplication::translate("Dialog", "Quit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
