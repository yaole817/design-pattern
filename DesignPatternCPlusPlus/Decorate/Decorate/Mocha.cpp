#include "Mocha.h"
Mocha::Mocha(Beverage* beverage) : _beverage(beverage){}
//Mocha::Mocha(Beverage* beverage){
//	_beverage = beverage;
//} 

string Mocha::getDescription(){
	return _beverage->getDescription() + ", Mocha";
}

double Mocha::cost(){
	return 0.20 + _beverage->cost();
}