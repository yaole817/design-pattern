#include <iostream>
#pragma once
class CaffeineBeverage {
public:
    void prepareRecipe();
private:
    virtual void brew() = 0;
    virtual void addCondiments() = 0;
    void boilWater();
    void pourInCup();
    virtual bool customerWantsCondiments();  // 钩子
};  

class Coffee : public CaffeineBeverage {
private:
    void brew();
    void addCondiments();
    bool customerWantsCondiments();
};

class Tea : public CaffeineBeverage {
private:
    void brew();
    void addCondiments();
    bool customerWantsCondiments();
};

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