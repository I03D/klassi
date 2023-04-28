#include <iostream>
#include "Beverage.h"
#include "Espresso.h"
#include "Milk.h"

using namespace std;

int main()
{
    Beverage* beverage1 = new Espresso();
    cout << beverage1->getDescription() << beverage1->cost() << endl;

    Beverage* beverage2 = new Espresso();

    beverage2 = new Milk(beverage);
    beverage2 = new Milk(beverage);

    cout << beverage2->getDescription() << " " << beverage2->cost() << endl;

    return 0;
}