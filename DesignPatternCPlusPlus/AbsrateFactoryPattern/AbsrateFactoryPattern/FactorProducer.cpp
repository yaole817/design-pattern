#include "FactorProducer.h"
#include "ShapeFactory.h"
#include "ColorFactory.h"

AbstractFactory* FactorProducer::getFactor(string choice){
	if (choice == "SHAPE"){
		return new ShapeFactory();
	}else if(choice == "COLOR"){
		return new ColorFactory();
	}
	return NULL;

}
