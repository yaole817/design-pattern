#include "ColorFactory.h"
#include "Red.h"
#include "Green.h"
#include "Blue.h"
#include <iostream>
MyColor* ColorFactory::getColor(string color){
	if(sizeof(color) == 0){
		return NULL;
	}else if(color == "RED"){
		return new Red();
	}else if(color == "GREEN"){
		return new Green();
	}else if(color == "BLUE"){
		return new Blue();
	}
	return NULL;
}

Shape* ColorFactory::getShape(string shape){
	return NULL;
}