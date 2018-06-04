#pragma once
#include "MyColor.h"
#include "Shape.h"
#include <string>
using std::string;
class AbstractFactory {
public:
	virtual MyColor* getColor(string color) = 0;
	virtual Shape* getShape(string shape) = 0;
};

