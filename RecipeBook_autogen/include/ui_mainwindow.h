/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAllergen;
    QAction *actionIngredient;
    QAction *actionRecipe;
    QAction *actionCopy_Current_Recipe;
    QAction *actionCurrentRecipe;
    QAction *actionCopy;
    QAction *actionEdit;
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_4;
    QFrame *line;
    QLabel *label_steps;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QVBoxLayout *verticalLayout;
    QLabel *NameLabel;
    QLabel *HotnessLabel;
    QLabel *AllergensLabel;
    QLabel *PiecesLabel;
    QLabel *CaloriesLabel;
    QLabel *TimeLabel;
    QLabel *label_Ingredients;
    QMenuBar *menubar;
    QMenu *menuAllergen;
    QMenu *menuIngredients;
    QMenu *menuCreate_new;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 698);
        actionAllergen = new QAction(MainWindow);
        actionAllergen->setObjectName(QString::fromUtf8("actionAllergen"));
        actionIngredient = new QAction(MainWindow);
        actionIngredient->setObjectName(QString::fromUtf8("actionIngredient"));
        actionRecipe = new QAction(MainWindow);
        actionRecipe->setObjectName(QString::fromUtf8("actionRecipe"));
        actionCopy_Current_Recipe = new QAction(MainWindow);
        actionCopy_Current_Recipe->setObjectName(QString::fromUtf8("actionCopy_Current_Recipe"));
        actionCurrentRecipe = new QAction(MainWindow);
        actionCurrentRecipe->setObjectName(QString::fromUtf8("actionCurrentRecipe"));
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        actionEdit = new QAction(MainWindow);
        actionEdit->setObjectName(QString::fromUtf8("actionEdit"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 0, 791, 604));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        line_2 = new QFrame(gridLayoutWidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 3, 0, 1, 1);

        line_3 = new QFrame(gridLayoutWidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_3, 5, 0, 1, 1);

        line_4 = new QFrame(gridLayoutWidget);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_4, 7, 0, 1, 1);

        line = new QFrame(gridLayoutWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 1, 0, 1, 1);

        label_steps = new QLabel(gridLayoutWidget);
        label_steps->setObjectName(QString::fromUtf8("label_steps"));

        gridLayout->addWidget(label_steps, 6, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(200);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 15, -1, 0);
        pushButton_2 = new QPushButton(gridLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);


        gridLayout->addLayout(horizontalLayout, 8, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        NameLabel = new QLabel(gridLayoutWidget);
        NameLabel->setObjectName(QString::fromUtf8("NameLabel"));

        verticalLayout->addWidget(NameLabel);

        HotnessLabel = new QLabel(gridLayoutWidget);
        HotnessLabel->setObjectName(QString::fromUtf8("HotnessLabel"));

        verticalLayout->addWidget(HotnessLabel);

        AllergensLabel = new QLabel(gridLayoutWidget);
        AllergensLabel->setObjectName(QString::fromUtf8("AllergensLabel"));

        verticalLayout->addWidget(AllergensLabel);

        PiecesLabel = new QLabel(gridLayoutWidget);
        PiecesLabel->setObjectName(QString::fromUtf8("PiecesLabel"));

        verticalLayout->addWidget(PiecesLabel);

        CaloriesLabel = new QLabel(gridLayoutWidget);
        CaloriesLabel->setObjectName(QString::fromUtf8("CaloriesLabel"));

        verticalLayout->addWidget(CaloriesLabel);

        TimeLabel = new QLabel(gridLayoutWidget);
        TimeLabel->setObjectName(QString::fromUtf8("TimeLabel"));

        verticalLayout->addWidget(TimeLabel);


        gridLayout->addLayout(verticalLayout, 2, 0, 1, 1);

        label_Ingredients = new QLabel(gridLayoutWidget);
        label_Ingredients->setObjectName(QString::fromUtf8("label_Ingredients"));

        gridLayout->addWidget(label_Ingredients, 4, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        menuAllergen = new QMenu(menubar);
        menuAllergen->setObjectName(QString::fromUtf8("menuAllergen"));
        menuIngredients = new QMenu(menubar);
        menuIngredients->setObjectName(QString::fromUtf8("menuIngredients"));
        menuCreate_new = new QMenu(menubar);
        menuCreate_new->setObjectName(QString::fromUtf8("menuCreate_new"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuCreate_new->menuAction());
        menubar->addAction(menuAllergen->menuAction());
        menubar->addAction(menuIngredients->menuAction());
        menuAllergen->addAction(actionAllergen);
        menuIngredients->addAction(actionIngredient);
        menuCreate_new->addAction(actionRecipe);
        menuCreate_new->addAction(actionCopy_Current_Recipe);
        menuCreate_new->addAction(actionCurrentRecipe);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionAllergen->setText(QApplication::translate("MainWindow", "New", nullptr));
        actionIngredient->setText(QApplication::translate("MainWindow", "New", nullptr));
        actionRecipe->setText(QApplication::translate("MainWindow", "New", nullptr));
        actionCopy_Current_Recipe->setText(QApplication::translate("MainWindow", "Copy", nullptr));
        actionCurrentRecipe->setText(QApplication::translate("MainWindow", "Edit", nullptr));
        actionCopy->setText(QApplication::translate("MainWindow", "Copy ", nullptr));
        actionEdit->setText(QApplication::translate("MainWindow", "Edit", nullptr));
        label_steps->setText(QApplication::translate("MainWindow", "Steps:", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "<<<", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", ">>>", nullptr));
        NameLabel->setText(QApplication::translate("MainWindow", "Name:", nullptr));
        HotnessLabel->setText(QApplication::translate("MainWindow", "Hotness:", nullptr));
        AllergensLabel->setText(QApplication::translate("MainWindow", "Allergens:", nullptr));
        PiecesLabel->setText(QApplication::translate("MainWindow", "Pieces:", nullptr));
        CaloriesLabel->setText(QApplication::translate("MainWindow", "Calories", nullptr));
        TimeLabel->setText(QApplication::translate("MainWindow", "Time:", nullptr));
        label_Ingredients->setText(QApplication::translate("MainWindow", "Ingredients: ", nullptr));
        menuAllergen->setTitle(QApplication::translate("MainWindow", "Allergen", nullptr));
        menuIngredients->setTitle(QApplication::translate("MainWindow", "Ingredients", nullptr));
        menuCreate_new->setTitle(QApplication::translate("MainWindow", "Recipe", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
