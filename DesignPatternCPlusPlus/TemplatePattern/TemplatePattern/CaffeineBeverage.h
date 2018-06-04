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
    virtual bool customerWantsCondiments();  // ����
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
    std::cout<<"��ˮ���" << std::endl;
}

void CaffeineBeverage::pourInCup() {
    std::cout<<"���뱭����"<<std::endl;
}

bool CaffeineBeverage::customerWantsCondiments() {
    return true;
}

void Coffee::brew() {
    std::cout<<"�÷�ˮ���ݿ��ȷ�"<<std::endl;
}

void Coffee::addCondiments() {
    std::cout<<"���Ǻ�ţ��"<<std::endl;
}

bool Coffee::customerWantsCondiments() {
    char zAnswer;
    std::cout<<"���Ŀ������Ƿ���Ҫţ�̺��ǣ�";
    std::cin>>zAnswer;
    zAnswer = toupper(zAnswer);
    if ('Y'==zAnswer) {
        return true;
    }
    else if ('N'==zAnswer) {
        return false;
    }
    else {
        std::cout<<"�������Ĭ�ϲ��ӵ���"<<std::endl;
        return false;
    }
}

void Tea::brew(){
    std::cout<<"�÷�ˮ���ݲ�Ҷ"<<std::endl;
}
void Tea::addCondiments(){
    std::cout<<"������"<<std::endl;
}

bool Tea::customerWantsCondiments(){
    char zAnswer;
    std::cout<<"���Ĳ����Ƿ���Ҫ���ʣ�";
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
        std::cout<<"�������Ĭ�ϲ��ӵ���"<<std::endl;
        return false;
    }
}