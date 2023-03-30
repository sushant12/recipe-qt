/********************************************************************************
** Form generated from reading UI file 'createrecipewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATERECIPEWINDOW_H
#define UI_CREATERECIPEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreateRecipeWindow
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QTextEdit *Name;
    QPlainTextEdit *Steps;
    QComboBox *Restrictions;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QCheckBox *checkBox;
    QScrollArea *scrollArea_3;
    QWidget *scrollAreaWidgetContents_3;
    QCheckBox *checkBox_3;
    QLabel *label;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QCheckBox *checkBox_2;
    QLabel *label_2;
    QComboBox *Pieces;
    QSlider *TimeToCook;
    QLabel *TimeToCookLabel;
    QLabel *TimeToCookLabel_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *pushButton;

    void setupUi(QDialog *CreateRecipeWindow)
    {
        if (CreateRecipeWindow->objectName().isEmpty())
            CreateRecipeWindow->setObjectName(QString::fromUtf8("CreateRecipeWindow"));
        CreateRecipeWindow->resize(820, 583);
        CreateRecipeWindow->setBaseSize(QSize(100, 100));
        verticalLayoutWidget = new QWidget(CreateRecipeWindow);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 30, 821, 561));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetNoConstraint);
        verticalLayout->setContentsMargins(0, 0, 0, 100);
        groupBox = new QGroupBox(verticalLayoutWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        Name = new QTextEdit(groupBox);
        Name->setObjectName(QString::fromUtf8("Name"));
        Name->setGeometry(QRect(60, 30, 371, 31));
        Steps = new QPlainTextEdit(groupBox);
        Steps->setObjectName(QString::fromUtf8("Steps"));
        Steps->setGeometry(QRect(60, 80, 381, 231));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Steps->sizePolicy().hasHeightForWidth());
        Steps->setSizePolicy(sizePolicy);
        Restrictions = new QComboBox(groupBox);
        Restrictions->addItem(QString());
        Restrictions->addItem(QString());
        Restrictions->setObjectName(QString::fromUtf8("Restrictions"));
        Restrictions->setGeometry(QRect(60, 330, 201, 28));
        scrollArea = new QScrollArea(groupBox);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(460, 50, 121, 271));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 119, 269));
        checkBox = new QCheckBox(scrollAreaWidgetContents);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(0, 0, 93, 26));
        scrollArea_3 = new QScrollArea(scrollAreaWidgetContents);
        scrollArea_3->setObjectName(QString::fromUtf8("scrollArea_3"));
        scrollArea_3->setGeometry(QRect(0, 0, 121, 271));
        scrollArea_3->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 119, 269));
        checkBox_3 = new QCheckBox(scrollAreaWidgetContents_3);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));
        checkBox_3->setGeometry(QRect(0, 0, 93, 26));
        scrollArea_3->setWidget(scrollAreaWidgetContents_3);
        scrollArea->setWidget(scrollAreaWidgetContents);
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(460, 30, 181, 20));
        scrollArea_2 = new QScrollArea(groupBox);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setGeometry(QRect(630, 50, 121, 271));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 119, 269));
        checkBox_2 = new QCheckBox(scrollAreaWidgetContents_2);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setGeometry(QRect(0, 0, 93, 26));
        scrollArea_2->setWidget(scrollAreaWidgetContents_2);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(630, 30, 181, 20));
        Pieces = new QComboBox(groupBox);
        Pieces->setObjectName(QString::fromUtf8("Pieces"));
        Pieces->setGeometry(QRect(460, 330, 181, 28));
        TimeToCook = new QSlider(groupBox);
        TimeToCook->setObjectName(QString::fromUtf8("TimeToCook"));
        TimeToCook->setGeometry(QRect(60, 390, 271, 21));
        TimeToCook->setMaximum(300);
        TimeToCook->setOrientation(Qt::Horizontal);
        TimeToCookLabel = new QLabel(groupBox);
        TimeToCookLabel->setObjectName(QString::fromUtf8("TimeToCookLabel"));
        TimeToCookLabel->setGeometry(QRect(340, 390, 63, 20));
        TimeToCookLabel_2 = new QLabel(groupBox);
        TimeToCookLabel_2->setObjectName(QString::fromUtf8("TimeToCookLabel_2"));
        TimeToCookLabel_2->setGeometry(QRect(390, 390, 63, 20));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(0, 40, 67, 17));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(0, 170, 67, 17));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(0, 340, 67, 17));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(0, 390, 67, 17));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(370, 340, 67, 17));

        verticalLayout->addWidget(groupBox);

        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);


        retranslateUi(CreateRecipeWindow);

        QMetaObject::connectSlotsByName(CreateRecipeWindow);
    } // setupUi

    void retranslateUi(QDialog *CreateRecipeWindow)
    {
        CreateRecipeWindow->setWindowTitle(QApplication::translate("CreateRecipeWindow", "Dialog", nullptr));
        groupBox->setTitle(QApplication::translate("CreateRecipeWindow", "Create Your Chicken Wings Recipe", nullptr));
        Name->setHtml(QApplication::translate("CreateRecipeWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        Steps->setPlainText(QString());
        Restrictions->setItemText(0, QApplication::translate("CreateRecipeWindow", "Spicy", nullptr));
        Restrictions->setItemText(1, QApplication::translate("CreateRecipeWindow", "Non Spicy", nullptr));

        checkBox->setText(QApplication::translate("CreateRecipeWindow", "CheckBox", nullptr));
        checkBox_3->setText(QApplication::translate("CreateRecipeWindow", "CheckBox", nullptr));
        label->setText(QApplication::translate("CreateRecipeWindow", "Ingredients", nullptr));
        checkBox_2->setText(QApplication::translate("CreateRecipeWindow", "CheckBox", nullptr));
        label_2->setText(QApplication::translate("CreateRecipeWindow", "Allergens", nullptr));
        TimeToCookLabel->setText(QApplication::translate("CreateRecipeWindow", "Time", nullptr));
        TimeToCookLabel_2->setText(QApplication::translate("CreateRecipeWindow", "Minutes", nullptr));
        label_3->setText(QApplication::translate("CreateRecipeWindow", "Name", nullptr));
        label_4->setText(QApplication::translate("CreateRecipeWindow", "Method", nullptr));
        label_5->setText(QApplication::translate("CreateRecipeWindow", "Hotness", nullptr));
        label_6->setText(QApplication::translate("CreateRecipeWindow", "Time", nullptr));
        label_7->setText(QApplication::translate("CreateRecipeWindow", "Pieces", nullptr));
        pushButton->setText(QApplication::translate("CreateRecipeWindow", "Submit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateRecipeWindow: public Ui_CreateRecipeWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATERECIPEWINDOW_H
