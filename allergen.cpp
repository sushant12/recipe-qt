#include "allergen.h"
#include <sstream>
#include <vector>
//cpp object constructor sequence
Allergen *a = new Allergen("Peanuts");
Allergen *b = new Allergen("Sesame");
//C++ Object COnstruction Sequence
std::vector<Allergen*> Allergen::listOfAllergens{a,b};

Allergen::Allergen(std::string name){
    this->name = name;
};

Allergen::~Allergen(){
}



std::vector<Allergen*> Allergen::getListOfAllergens(){
    return listOfAllergens;
}
std::string Allergen::getName(){
    return name;
}
