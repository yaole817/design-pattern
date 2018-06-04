#pragma once
#include "Beverage.h"
class CondimentDecorator : public Beverage {
public:
	CondimentDecorator(){}
	virtual string getDescription() = 0;
};

