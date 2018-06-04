#include <iostream>
#include "DarkRost.h"
#include "Mocha.h"
#include "Whip.h"
using std::cout;
using std::endl;

int main(){
	Beverage* beverage = new DarkRost();
	cout << beverage->getDescription() << " $" << beverage->cost() << endl;
	
	Beverage* beverage2 = new DarkRost();
	beverage2 = new Mocha(beverage2);
	cout<< beverage2->getDescription()<< " $"<< beverage2->cost() <<endl;

	beverage2 = new Whip(beverage2);
	cout<< beverage2->getDescription()<< " $"<< beverage2->cost() <<endl;

	delete beverage;
	delete beverage2;
}