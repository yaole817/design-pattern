#pragma once
#include "QuackBehavior.h"
#include "FlyBehavior.h"
class Duck {
public:
	virtual void display() = 0;
	void swim();
	void performQuack();
	void performFly();
	virtual ~Duck();

protected:
	QuackBehavior* quackBehavior;
	FlyBehavior* flyBehavior;
};

