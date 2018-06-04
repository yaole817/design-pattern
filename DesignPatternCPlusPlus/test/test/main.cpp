
#include <iostream>
using namespace std;
class Base {
public:
    Base() {};
    virtual ~Base() {};
    virtual void DoSomething() { cout << "Do something in class Base!" << endl; };
};

class Derived : public Base {
public:
    Derived() {};
    ~Derived() { cout << "Output from the destructor of class Derived!" << endl; }; 
    void DoSomething() { cout << "Do something in class Derived!" << endl; };
};

int main(){
	Base *b = new Derived;//��Ի���Ľӿ�ʵ����һ�����࣬��Խӿڱ��
	b->DoSomething();
	delete b;
	return 0;
}