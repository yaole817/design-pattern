#include "Duck.h"

int main()
{
    Duck* mallard = new MallardDuck();
    mallard->performFly();
    mallard->perfromQuack();
    mallard->setFlyBehavior(new FlyNoWay());
    printf("My wings hurt!!\n");
    mallard->performFly();
    delete mallard;
    return 0;
}
