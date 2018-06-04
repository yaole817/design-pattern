#include "MallardDuck.h"
#include "FlyWithWings.h"
#include "Quack.h"
#include <iostream>

void MallardDuck::display(){
	std::cout<<"I am a mallard duck!"<<std::endl;
}

MallardDuck::MallardDuck(){
	quackBehavior = new Quack();
	flyBehavior = new FlyWithWings();
}
