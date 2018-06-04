#include "Beverage.h"

Beverage::Beverage(string description = "Unknow Beverage") : _description(description){}
//Beverage::Beverage(string description = "Unknow Beverage"){
//	_description = description;
//}

string Beverage::getDescription(void) {
	return _description;
}