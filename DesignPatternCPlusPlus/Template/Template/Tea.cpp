#include "Tea.h"
#include <iostream>
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