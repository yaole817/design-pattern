#pragma once
#include <iostream>
using std::string;
class Beverage {
public:
	Beverage(string discription);
	virtual double cost() = 0;
	virtual string getDescription();
private:
	string _description;
};

