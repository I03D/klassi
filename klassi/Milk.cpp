#include "Milk.h";

Milk::Milk(Beverage* Beverage) {
	this->beverage = Beverage;
}

string Milk::getDescription() {
	return beverage->getDescription() + ", Milk";
}

double Milk::cost() {
	return 20 + beverage->cost();
}
