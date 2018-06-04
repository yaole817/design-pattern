#include "Duck.h"
#include <iostream>

void Duck::swim(){
	std::cout<<"I can swim"<<std::endl;
}

void Duck::performFly(){
	flyBehavior->fly();
}
void Duck::performQuack(){
	quackBehavior->quack();
}

Duck::~Duck(){
	delete flyBehavior;
	delete quackBehavior;
}
