#include "Tea.h"
#include "Coffee.h"
#include <iostream>
int main() {
    Coffee coffee;
    Tea tea;
	std::cout<<"准备煮咖啡"<<std::endl;
    coffee.prepareRecipe();
	std::cout<<std::endl;
	std::cout<< "准备泡茶"<<std::endl;
    tea.prepareRecipe();
    return 0;
}