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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_OK;
    QPushButton *pushButton_Cancel;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(492, 213);
        horizontalLayout_3 = new QHBoxLayout(Dialog);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(10);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(Dialog);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(Dialog);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        pushButton_OK = new QPushButton(Dialog);
        pushButton_OK->setObjectName("pushButton_OK");
        pushButton_OK->setIconSize(QSize(16, 16));
        pushButton_OK->setCheckable(false);
        pushButton_OK->setFlat(false);

        horizontalLayout_2->addWidget(pushButton_OK);

        pushButton_Cancel = new QPushButton(Dialog);
        pushButton_Cancel->setObjectName("pushButton_Cancel");
        pushButton_Cancel->setIconSize(QSize(16, 16));
        pushButton_Cancel->setCheckable(false);
        pushButton_Cancel->setFlat(false);

        horizontalLayout_2->addWidget(pushButton_Cancel);


        verticalLayout->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout);


        retranslateUi(Dialog);

        pushButton_OK->setDefault(false);
        pushButton_Cancel->setDefault(false);


        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "Enter your name:", nullptr));
        pushButton_OK->setText(QCoreApplication::translate("Dialog", "OK", nullptr));
        pushButton_Cancel->setText(QCoreApplication::translate("Dialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
