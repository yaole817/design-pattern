#pragma once
#include "AbstractFactory.h"
#include <string>
using std::string;

class FactorProducer {
public:
	static AbstractFactory* getFactor(string choice);
};

