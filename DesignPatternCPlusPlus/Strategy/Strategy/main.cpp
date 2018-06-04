#include "Duck.h"
#include "MallardDuck.h"
#include "FlyNoWay.h"
#include <iostream>
int main(){
	MallardDuck* mallardDuck = new MallardDuck();
	mallardDuck->display();
	Duck* mallard = new MallardDuck();
    mallard->performFly();
    mallard->performQuack();
    //mallard->setFlyBehavior(new FlyNoWay());
    std::cout<<"My wings hurt!!"<<std::endl;
    mallard->performFly();
    delete mallard;
    return 0;
}