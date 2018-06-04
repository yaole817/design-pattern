#include "Singleton.h"
#include <iostream>

Singleton* Singleton::uniqueSingleton = NULL;

Singleton* Singleton::getInstance(){
	if(uniqueSingleton == NULL){
		uniqueSingleton = new Singleton();
	}
	return uniqueSingleton;
}

Singleton::~Singleton(void){
	if(uniqueSingleton == NULL){
		return;
	}
	delete uniqueSingleton;
	uniqueSingleton = 0;
}

void Singleton::showMessage(){
	std::cout<<"singleton is created!"<<std::endl;
}

