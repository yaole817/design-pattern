#pragma once
#include "condimentdecorator.h"
class Mocha : public CondimentDecorator {
public:
	Mocha(Beverage* beverage) : _beverage(beverage){}
	string getDescription();
	double cost();
private:
	Beverage* _beverage; 
};

