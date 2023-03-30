/********************************************************************************
** Form generated from reading UI file 'credits.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREDITS_H
#define UI_CREDITS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Credits
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *pushButton;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;

    void setupUi(QDialog *Credits)
    {
        if (Credits->objectName().isEmpty())
            Credits->setObjectName(QString::fromUtf8("Credits"));
        Credits->resize(726, 355);
        label = new QLabel(Credits);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, -90, 401, 221));
        QFont font;
        font.setPointSize(36);
        label->setFont(font);
        label_2 = new QLabel(Credits);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 40, 381, 261));
        label_3 = new QLabel(Credits);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 330, 151, 20));
        label_4 = new QLabel(Credits);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(380, 30, 311, 81));
        QFont font1;
        font1.setPointSize(22);
        label_4->setFont(font1);
        label_5 = new QLabel(Credits);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(400, 110, 63, 20));
        label_6 = new QLabel(Credits);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(400, 190, 241, 20));
        pushButton = new QPushButton(Credits);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(440, 270, 221, 29));
        label_7 = new QLabel(Credits);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(400, 170, 241, 20));
        label_8 = new QLabel(Credits);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(400, 230, 111, 20));
        label_9 = new QLabel(Credits);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(490, 230, 71, 20));

        retranslateUi(Credits);

        QMetaObject::connectSlotsByName(Credits);
    } // setupUi

    void retranslateUi(QDialog *Credits)
    {
        Credits->setWindowTitle(QApplication::translate("Credits", "Dialog", nullptr));
        label->setText(QApplication::translate("Credits", "Credits", nullptr));
        label_2->setText(QApplication::translate("Credits", "\n"
"Producer: Mark  Harrison \n"
"Senior Producer: Mark Harrison\n"
"Supervisor: Mark Harrison \n"
"Associate Producer: Mark Harrison \n"
"Production Coordinator : Mark Harrison  \n"
"Project Management/Assistance: Mark Harrison  \n"
"Development Director: Mark Harrison \n"
"Project Leader/Manager: Mark Harrison \n"
"Production Manager: Mark Harrison \n"
"Head Procrastinator: Mark Harrison \n"
"GUI Application: QT \n"
"C++ Creator: Bjorne Stroustrup\n"
" ", nullptr));
        label_3->setText(QApplication::translate("Credits", "<a href=\"https://github.com/MarkHarrison03/RecipeApp\">GitHub</a>", nullptr));
        label_4->setText(QApplication::translate("Credits", "Obligatory Union", nullptr));
        label_5->setText(QString());
        label_6->setText(QApplication::translate("Credits", "Size taken up by above data:", nullptr));
        pushButton->setText(QApplication::translate("Credits", "Change type", nullptr));
        label_7->setText(QApplication::translate("Credits", "Size taken up by above data:", nullptr));
        label_8->setText(QApplication::translate("Credits", "Current type:", nullptr));
        label_9->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Credits: public Ui_Credits {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREDITS_H
