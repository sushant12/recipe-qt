#include "addallergenwindow.h"

#include <iostream>

#include <QDebug>

#include <QString>

#include "allergen.h"

#include "./ui_addallergenwindow.h"

using namespace staticAllergens;
AddAllergenWindow::AddAllergenWindow(QWidget * parent):
  QDialog(parent),
  ui(new Ui::AddAllergenWindow) {
    ui -> setupUi(this);
  }

AddAllergenWindow::~AddAllergenWindow() {
  delete ui;
}

void AddAllergenWindow::show_window() {

  show();

}

void AddAllergenWindow::on_pushButton_clicked() {

  QString text = ui -> lineEdit -> text();

  if ((QString::compare(text, "Enter Allergen Name", Qt::CaseInsensitive) != 0)) {

    Allergen * newAllergen = new Allergen(text.toStdString());
    addAllergen(newAllergen);
    emit allergensUpdated();

  }

  hide();
}

void AddAllergenWindow::on_pushButton_2_clicked() {

}