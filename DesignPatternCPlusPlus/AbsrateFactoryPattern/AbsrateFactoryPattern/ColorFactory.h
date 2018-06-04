#pragma once
#include "abstractfactory.h"
#include "Shape.h"
class ColorFactory : public AbstractFactory {
public:
	MyColor* getColor(string colorType) override;
	Shape* getShape(string shapeType) override;
};

