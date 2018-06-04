#include <iostream>
#include "DarkRost.h"
#include "Mocha.h"

int main(){
	Beverage* beverage = new DarkRost();
	std::cout<< beverage->getDescription() << " $" << beverage->cost() << std::endl;
	
	Beverage* beverage2 = new DarkRost();
	beverage2 = new Mocha(beverage);
}