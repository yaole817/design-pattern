#include "Coffee.h"
#include <iostream>

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