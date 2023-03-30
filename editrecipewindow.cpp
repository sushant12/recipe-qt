#include "editrecipewindow.h"

#include "ui_editrecipewindow.h"

#include "allergen.h"

#include "IncorrectInputException.h"

#include <algorithm>

#ifndef TTCLimit
#define TTCLimit 9
#endif
EditRecipeWindow::EditRecipeWindow(QWidget * parent):
  QDialog(parent),
  ui(new Ui::EditRecipeWindow) {
    ui -> setupUi(this);

  }

EditRecipeWindow::~EditRecipeWindow() {
  delete ui;
}

void EditRecipeWindow::setup(Recipe * a) {
  show();
  ui -> Name -> setText(QString::fromStdString(a -> getName()));
  ui -> Pieces -> setCurrentText(QString::fromStdString(a -> getPieces()));
  ui -> Steps -> setPlainText(QString::fromStdString(a -> getSteps()));

  QWidget * container = new QWidget;
  QVBoxLayout * layout = new QVBoxLayout(container);

  ui -> scrollArea -> setWidget(container);
  ui -> scrollArea -> setWidgetResizable(true);

  for (Ingredient * piece: Ingredient::getListOfIngredients()) {
    QCheckBox * checkBox = new QCheckBox(QString::fromStdString(piece -> getName()));
    for (Ingredient * i: a -> getListOfIngredients()) {
      if (QString::fromStdString(i -> getName()).compare(checkBox -> text()) == 0) {
        checkBox -> setChecked(true);
      }
    }
    layout -> addWidget(checkBox);
  }

  QWidget * containerAllergens = new QWidget;
  QVBoxLayout * layoutAllergens = new QVBoxLayout(containerAllergens);
  ui -> scrollArea_2 -> setWidget(containerAllergens);
  ui -> scrollArea_2 -> setWidgetResizable(true);
  std::vector < std::string > allergenVector;
  std::stringstream stream(a -> getAllergens());
  std::string currentString;
  while (std::getline(stream, currentString, ' ')) {
    allergenVector.push_back(currentString);
  }
  for (Allergen * al: Allergen::getListOfAllergens()) {

    QCheckBox * checkBoxAllergen = new QCheckBox(QString::fromStdString(al -> getName()));

    if (std::find(allergenVector.begin(), allergenVector.end(), al -> getName()) != allergenVector.end()) {
      checkBoxAllergen -> setChecked(true);
    }

    layoutAllergens -> addWidget(checkBoxAllergen);
  }

}

void EditRecipeWindow::on_pushButton_clicked() {
  QString stringName(ui -> Name -> toPlainText());
  std::string name = stringName.toStdString();
  try {
    if (stringName.compare("Enter Recipe Name") == 0) {
      throw IncorrectInputException();
    }
  } catch (IncorrectInputException e) {

  }
  QString steps(ui -> Steps -> toPlainText());
  std::string stepsString = steps.toStdString();
  QString TTC(ui -> TimeToCookLabel -> text());
  int ttcInt = TTC.toInt();
  QList < Ingredient * > ingredients;
  QList < QCheckBox * > checkboxes = ui -> scrollArea -> findChildren < QCheckBox * > ();

  for (QCheckBox * box: checkboxes) {
    if (box -> isChecked()) {
      std::string ingName = box -> text().toStdString();
      for (Ingredient * a: Ingredient::getListOfIngredients()) {
        if (a -> getName() == ingName) {
          ingredients.append(a);
        }
      }
    }
  }

  struct s {
    unsigned int TTCBitStruct: TTCLimit;
  };
  //bitstruct to ensure that
  //ttc cant exceed 512
  s structTTC;

  structTTC.TTCBitStruct = TTC.toInt();
  QString listOfAllergensString = "";
  QList < QCheckBox * > checkboxAllergen = ui -> scrollArea_2 -> findChildren < QCheckBox * > ();
  for (QCheckBox * box: checkboxAllergen) {
    if (box -> isChecked()) {
      listOfAllergensString += box -> text();
      listOfAllergensString += " ";
    }
  }
  QString restriction = ui -> Restrictions -> currentText();
  bool spicy = false;
  if (restriction.compare("spicy") == 0) {
    spicy = true;
  }
  std::string pieces = ui -> Pieces -> currentText().toStdString();

  Recipe * newRecipe = new Recipe(name, pieces, stepsString, ttcInt, ingredients, listOfAllergensString.toStdString(), spicy);
  emit recipeEdited(newRecipe);
  hide();
}

void EditRecipeWindow::on_TimeToCook_actionTriggered(int action) {
  QString num = QString::number(ui -> TimeToCook -> value());
  ui -> TimeToCookLabel -> setText(num);
}