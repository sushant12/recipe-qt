/********************************************************************************
** Form generated from reading UI file 'incorrectinputexceptionwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INCORRECTINPUTEXCEPTIONWINDOW_H
#define UI_INCORRECTINPUTEXCEPTIONWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_IncorrectInputExceptionWindow
{
public:
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *IncorrectInputExceptionWindow)
    {
        if (IncorrectInputExceptionWindow->objectName().isEmpty())
            IncorrectInputExceptionWindow->setObjectName(QString::fromUtf8("IncorrectInputExceptionWindow"));
        IncorrectInputExceptionWindow->resize(400, 72);
        label = new QLabel(IncorrectInputExceptionWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 20, 241, 20));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        pushButton = new QPushButton(IncorrectInputExceptionWindow);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(270, 40, 83, 29));

        retranslateUi(IncorrectInputExceptionWindow);

        QMetaObject::connectSlotsByName(IncorrectInputExceptionWindow);
    } // setupUi

    void retranslateUi(QDialog *IncorrectInputExceptionWindow)
    {
        IncorrectInputExceptionWindow->setWindowTitle(QApplication::translate("IncorrectInputExceptionWindow", "Dialog", nullptr));
        label->setText(QApplication::translate("IncorrectInputExceptionWindow", "Please fill all forms", nullptr));
        pushButton->setText(QApplication::translate("IncorrectInputExceptionWindow", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class IncorrectInputExceptionWindow: public Ui_IncorrectInputExceptionWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INCORRECTINPUTEXCEPTIONWINDOW_H
