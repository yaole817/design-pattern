#include <string>
using std::string;
#pragma once
class Beverage {
public:
	Beverage(){}
	Beverage(string discription);
	virtual double cost() = 0;
	virtual string getDescription();
private:
	string _description;
};

