/********************************************************************************
** Form generated from reading UI file 'addallergenwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDALLERGENWINDOW_H
#define UI_ADDALLERGENWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddAllergenWindow
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QLabel *label;
    QLineEdit *lineEdit;

    void setupUi(QDialog *AddAllergenWindow)
    {
        if (AddAllergenWindow->objectName().isEmpty())
            AddAllergenWindow->setObjectName(QString::fromUtf8("AddAllergenWindow"));
        AddAllergenWindow->resize(402, 224);
        gridLayoutWidget = new QWidget(AddAllergenWindow);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 0, 401, 291));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 5, 0, 1, 2);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(63, 0));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        lineEdit = new QLineEdit(gridLayoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 1, 1, 1, 1);


        retranslateUi(AddAllergenWindow);

        QMetaObject::connectSlotsByName(AddAllergenWindow);
    } // setupUi

    void retranslateUi(QDialog *AddAllergenWindow)
    {
        AddAllergenWindow->setWindowTitle(QApplication::translate("AddAllergenWindow", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("AddAllergenWindow", "Save", nullptr));
        label->setText(QApplication::translate("AddAllergenWindow", "Name:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddAllergenWindow: public Ui_AddAllergenWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDALLERGENWINDOW_H
