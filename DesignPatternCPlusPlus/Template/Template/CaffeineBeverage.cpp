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
    std::cout<<"��ˮ���" << std::endl;
}

void CaffeineBeverage::pourInCup() {
    std::cout<<"���뱭����"<<std::endl;
}

bool CaffeineBeverage::customerWantsCondiments() {
    return true;
}
