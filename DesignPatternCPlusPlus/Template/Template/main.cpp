#include "Tea.h"
#include "Coffee.h"
#include <iostream>
int main() {
    Coffee coffee;
    Tea tea;
	std::cout<<"׼���󿧷�"<<std::endl;
    coffee.prepareRecipe();
	std::cout<<std::endl;
	std::cout<< "׼���ݲ�"<<std::endl;
    tea.prepareRecipe();
    return 0;
}