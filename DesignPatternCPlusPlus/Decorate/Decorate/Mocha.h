#pragma once
#include "condimentdecorator.h"
class Mocha : public CondimentDecorator {
public:
	Mocha(Beverage* beverage);
	string getDescription() override;
	double cost() override;
private:
	Beverage* _beverage; 
};

