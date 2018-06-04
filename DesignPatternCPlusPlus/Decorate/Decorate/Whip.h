#pragma once
#include "CondimentDecorator.h"
class Whip : public CondimentDecorator{
public:

	Whip(Beverage* beverage);
	string getDescription() override;
	double cost() override;
private:
	Beverage* _beverage; 
};

