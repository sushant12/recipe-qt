#include "mainwindow.h"

#include "./ui_mainwindow.h"

#include "recipe.h"

#include "addallergenwindow.h"

#include "addingredientwindow.h"

#include "createrecipewindow.h"

#include <vector>

#include "allergen.h"

#include "editrecipewindow.h"

#include "global.h"

int counter = 0;
std::vector < Recipe * > recipies {};
bool baseRecipeRemoved = false;

MainWindow::MainWindow(QWidget * parent): QMainWindow(parent), ui(new Ui::MainWindow) {
  Ingredient * ingredient = new Ingredient("Paprika", 5);
  QList < Ingredient * > ingredients {
    ingredient
  };
  Recipe * baseRecipe = new Recipe("Buffalo Wings", "1", "Bla bla", 30, ingredients, "N/A", false);
  recipies.push_back(baseRecipe);
  ui -> setupUi(this);
  this -> setWindowTitle("Tasty Chicken Wings");
  ui -> gridLayout -> setSizeConstraint(QLayout::SetMinimumSize);
  ui -> label_Ingredients -> setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
  * this << baseRecipe;
};
//memory management
MainWindow::~MainWindow() {
  for (Allergen * a: Allergen::getListOfAllergens()) {
    delete(a);
  }
  for (Ingredient * i: Ingredient::getListOfIngredients()) {
    delete(i);
  }
  for (Recipe * a: recipies) {
    delete(a);
  }
  delete ui;
}

//operator overloading
void MainWindow::operator << (Recipe * b) {
  ui -> NameLabel -> setText("Name : " + QString::fromStdString(b -> name));
  ui -> AllergensLabel -> setText("Allergens : " + QString::fromStdString(b -> allergens));

  std::string hotness = "";
  if (QString::number(b -> isSpicy()) == '1') {
    hotness = "Spicy";
  } else {
    hotness = "Not Spicy";
  }
  ui -> HotnessLabel -> setText("Hotness : " + QString::fromStdString(hotness));
  ui -> PiecesLabel -> setText("Pieces : " + QString::fromStdString(b -> pieces));
  ui -> TimeLabel -> setText("Time : " + QString::number(b -> timeToCook));
  ui -> CaloriesLabel -> setText("Calories :" + QString::number(b -> getCalories())); //overridden virtual function
  std::string ingList;
  for (Ingredient * i: b -> listOfIngredients) {
    ingList += i -> getName();
    ingList += "\nCalories: ";
    ingList += std::to_string(i -> getCalories()); //this getCalories is a virtual function that is overrideen by its derived class 5 lines up
    ingList += "\n\n";
  }

  ui -> label_Ingredients -> setText("Ingredients: \n" + QString::fromStdString(ingList));
  ui -> label_steps -> setText("Steps:\n " + QString::fromStdString(b -> steps));

}

void MainWindow::on_pushButton_clicked() {
  counter++;
  if (counter >= recipies.size()) {

    counter = 0;
  }
  Recipe * currentRecipe = recipies.at(counter);

  * this << currentRecipe;

}

std::vector < Recipe * > MainWindow::getrecipies() {
  return recipies;
}

void MainWindow::updateRecipies(Recipe * a) {
  if (baseRecipeRemoved == false) {
    recipies.erase(recipies.begin());
    baseRecipeRemoved = true;
  }
}

void MainWindow::on_pushButton_2_clicked() {
  counter--;
  if (counter <= -1) {
    counter = recipies.size() - 1;

  }
  Recipe * currentRecipe = recipies.at(counter);
  * this << currentRecipe;

}

void MainWindow::on_actionAllergen_triggered() {
  AddAllergenWindow * windowAllergen = new AddAllergenWindow;
  windowAllergen -> show_window();
}

void MainWindow::on_actionIngredient_triggered() {
  addingredientwindow * windowIng = new addingredientwindow;
  windowIng -> show_window();

}

void MainWindow::on_actionRecipe_triggered() {
  CreateRecipeWindow * a = new CreateRecipeWindow;
  connect(a, SIGNAL(recipeAdded(Recipe * )), this, SLOT(updateRecipies(Recipe * )));

  a -> show_window();
}

void MainWindow::on_actionCopy_Current_Recipe_triggered() {
  //SHALLOW COPY
  Recipe * newRecipe = recipies.at(counter);
  CreateRecipeWindow * a = new CreateRecipeWindow;
  a -> setUi(newRecipe);
  a -> show_window();

}

void MainWindow::on_actionCurrentRecipe_triggered() {
  //deep copy
  Recipe * newRecipe(recipies.at(counter));
  for (int i = 0; i < newRecipe -> listOfIngredients.size(); i++) {}
  EditRecipeWindow * a = new EditRecipeWindow;
  connect(a, SIGNAL(recipeEdited(Recipe * )), this, SLOT(editRecipe(Recipe * )));

  a -> setup(newRecipe);

}
void MainWindow::editRecipe(Recipe * a) {
  std::replace(recipies.begin(), recipies.end(), recipies.at(counter), a);
  * this << recipies.at(counter);

}