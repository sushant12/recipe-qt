#ifndef BASEALLERGENITEM_H
#define BASEALLERGENITEM_H
#include <string>
//abstract class
class BaseAllergenItem
{
public:

    virtual ~BaseAllergenItem(){};
    virtual std::string getName() = 0;

};

#endif // BASEALLERGENITEM_H
