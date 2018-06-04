#include "Whip.h"
//Whip::Whip(Beverage* beverage) : _beverage(beverage){}
Whip::Whip(Beverage* beverage){
	_beverage = beverage;
} 

string Whip::getDescription(){
	return _beverage->getDescription() + ", Whip";
}

double Whip::cost(){
	return 0.10 + _beverage->cost();
}
