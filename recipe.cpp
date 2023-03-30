#include "recipe.h"

#include <string>

#include <vector>

using namespace std;

Recipe::Recipe(string name, string pieces, string Steps, int time, QList < Ingredient * > listOfIngs, string allergens, bool isSpicy) {
  this -> name = name;
  this -> pieces = pieces;
  this -> steps = Steps;
  this -> timeToCook = time;
  this -> listOfIngredients = listOfIngs;
  this -> allergens = allergens;
  this -> isSpicyBool = isSpicy;
};

Recipe::~Recipe() {};
//c++ deep copy constructor, plus c++ references
Recipe::Recipe(const Recipe & a) {

  name = a.name;
  pieces = a.pieces;
  steps = a.steps;
  timeToCook = a.timeToCook;
  listOfIngredients = a.listOfIngredients;
  allergens = a.allergens;
  isSpicyBool = a.isSpicyBool;
}

int Recipe::getCalories() {
  //overriding virtual function
  int calories = 0;
  for (Ingredient * i: listOfIngredients) {
    calories = addNumbers(calories, i -> getCalories());
  }
  return calories;
};

bool Recipe::isSpicy() {
  if (isSpicyBool) {
    return true;
  } else {
    return false;
  }
}

string Recipe::getName() {
  return name;
}
string Recipe::getSteps() {
  return steps;
};
int Recipe::getTimeToCook() {
  return timeToCook;
};

string Recipe::getAllergens() {
  return allergens;
};
QList < Ingredient * > Recipe::getListOfIngredients() {
  return listOfIngredients;
};
string Recipe::getPieces() {
  return pieces;
}