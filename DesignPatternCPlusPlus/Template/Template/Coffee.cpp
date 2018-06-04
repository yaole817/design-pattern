#include "Coffee.h"
#include <iostream>

void Coffee::brew() {
    std::cout<<"用沸水冲泡咖啡粉"<<std::endl;
}

void Coffee::addCondiments() {
    std::cout<<"加糖和牛奶"<<std::endl;
}

bool Coffee::customerWantsCondiments() {
    char zAnswer;
    std::cout<<"您的咖啡中是否需要牛奶和糖：";
    std::cin>>zAnswer;
    zAnswer = toupper(zAnswer);
    if ('Y'==zAnswer) {
        return true;
    }
    else if ('N'==zAnswer) {
        return false;
    }
    else {
        std::cout<<"输入错误，默认不加调料"<<std::endl;
        return false;
    }
}