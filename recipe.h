//header files and inclusion guards
#ifndef RECIPE_H

#define RECIPE_H

#include <string>

#include <vector>

#include <initializer_list>

#include "ingredient.h"

#include <QList>

#include "basefooditem.h"

using namespace std;

//multiple inheritance

class Recipe: public Ingredient, public BaseFoodItem {
  //friendship
  friend class MainWindow;
  //priv and public
  private:
    string name;
  string pieces;
  string steps;
  int timeToCook;
  string allergens;
  bool isSpicyBool;
  QList < Ingredient * > listOfIngredients;

  public:
    //template for adding both calories of ints and calories of doubles
    template < typename t >
    inline t addNumbers(t a, t b) {
      return a + b;
    }

  Recipe(string, string, string, int, QList < Ingredient * > , string, bool);
  Recipe(const Recipe & a);

  ~Recipe();

  void addIngredients(std::vector < Ingredient * > );
  int getCalories() override;
  string getName() override;
  string getSteps();

  int getTimeToCook();
  string getAllergens();
  QList < Ingredient * > getListOfIngredients();
  string getPieces();
  bool isSpicy() override;

};
#endif // RECIPE_H