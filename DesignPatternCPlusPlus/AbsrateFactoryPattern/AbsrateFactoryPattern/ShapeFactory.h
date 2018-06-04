#pragma once
#include "abstractfactory.h"

class ShapeFactory : public AbstractFactory {
public:
	Shape* getShape(string shapeType) override;
	MyColor* getColor(string color) override;
};

