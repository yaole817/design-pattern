#include "CaffeineBeverage.h"
#include <iostream>
void CaffeineBeverage::prepareRecipe() {
    boilWater();
    brew();
    pourInCup();
    if (customerWantsCondiments()){
        addCondiments();
    }
}

void CaffeineBeverage::boilWater(){
    std::cout<<"把水煮沸" << std::endl;
}

void CaffeineBeverage::pourInCup() {
    std::cout<<"倒入杯子中"<<std::endl;
}

bool CaffeineBeverage::customerWantsCondiments() {
    return true;
}
