/********************************************************************************
** Form generated from reading UI file 'addingredientwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDINGREDIENTWINDOW_H
#define UI_ADDINGREDIENTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addingredientwindow
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit;
    QLineEdit *ingredientname;
    QLabel *label_2;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *addingredientwindow)
    {
        if (addingredientwindow->objectName().isEmpty())
            addingredientwindow->setObjectName(QString::fromUtf8("addingredientwindow"));
        addingredientwindow->resize(421, 106);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(addingredientwindow->sizePolicy().hasHeightForWidth());
        addingredientwindow->setSizePolicy(sizePolicy);
        gridLayoutWidget = new QWidget(addingredientwindow);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 0, 421, 111));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(gridLayoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 1, 1, 1, 1);

        ingredientname = new QLineEdit(gridLayoutWidget);
        ingredientname->setObjectName(QString::fromUtf8("ingredientname"));

        gridLayout->addWidget(ingredientname, 0, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(63, 0));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(63, 0));

        gridLayout->addWidget(label, 0, 0, 1, 1, Qt::AlignLeft|Qt::AlignTop);

        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 2, 0, 1, 2);


        retranslateUi(addingredientwindow);

        QMetaObject::connectSlotsByName(addingredientwindow);
    } // setupUi

    void retranslateUi(QDialog *addingredientwindow)
    {
        addingredientwindow->setWindowTitle(QApplication::translate("addingredientwindow", "Dialog", nullptr));
        lineEdit->setText(QString());
        ingredientname->setText(QString());
        label_2->setText(QApplication::translate("addingredientwindow", "Calories", nullptr));
        label->setText(QApplication::translate("addingredientwindow", "Name", nullptr));
        pushButton->setText(QApplication::translate("addingredientwindow", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addingredientwindow: public Ui_addingredientwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDINGREDIENTWINDOW_H
