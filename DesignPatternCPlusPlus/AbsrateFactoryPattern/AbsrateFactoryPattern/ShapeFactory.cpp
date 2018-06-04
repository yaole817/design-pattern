#include "ShapeFactory.h"
#include "Circle.h"
#include "MyRectangle.h"
#include "Square.h"

Shape* getShape(string shapeType){
	if(sizeof(shapeType) == 0){
		return NULL;
	}
	if (shapeType == "CIRCLE"){
		return new Circle();
	}else if (shapeType == "RECTANGLE"){
		return new MyRectangle();
	}else if (shapeType == "SQUARE"){
		return new Square();
	}
		
	return NULL;
}

MyColor* getColor(string color){
	return NULL;
}
