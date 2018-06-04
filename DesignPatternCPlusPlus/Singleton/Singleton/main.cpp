#include "Singleton.h"

int main(){
	Singleton* singleton = Singleton::getInstance();
	singleton->showMessage();

	return 0;
}