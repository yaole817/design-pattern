#include "Tea.h"
#include <iostream>
void Tea::brew(){
    std::cout<<"用沸水浸泡茶叶"<<std::endl;
}
void Tea::addCondiments(){
    std::cout<<"加柠檬"<<std::endl;
}

bool Tea::customerWantsCondiments(){
    char zAnswer;
    std::cout<<"您的茶中是否需要柠檬：";
    fflush(stdin);
    std::cin>>zAnswer;
    zAnswer = toupper(zAnswer);
    if ('Y'==zAnswer){
        return true;
    }
    else if ('N'==zAnswer){
        return false;
    }
    else{
        std::cout<<"输入错误，默认不加调料"<<std::endl;
        return false;
    }
}