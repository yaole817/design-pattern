#include <iostream>
#pragma once
using namespace std;

class FlyBehavior {
public:
    virtual void fly() = 0;
};

class FlyWithWings:public FlyBehavior {
public:
    void fly(){
        cout<<"I'm flying!!"<<endl;
    }
};

class FlyNoWay:public FlyBehavior {
public:
    void fly(){
        printf("I can't fly\n");
    }
};

class QuackBehavior {
public:
    virtual void quack() =0;
};

class Quack:public QuackBehavior {
public:
    void quack() {
        printf("Quack\n");
    }
};

class MuteQuack:public QuackBehavior {
public:
    void quack(){
        printf("<<Silence>>\n");
    }
};

class Squeak:public QuackBehavior {
public:
    void quack() {
        printf("Squeak\n");
    }
};

class Duck {
public:
    virtual ~Duck() {
        delete m_pFlyBehavior;
        delete m_pQuackBehavior;
    }
    virtual void display() = 0;

    void performFly() {
        if (NULL !=m_pFlyBehavior){
            m_pFlyBehavior->fly();
        }
    }

    void perfromQuack() {
        if (NULL != m_pQuackBehavior) {
            m_pQuackBehavior->quack();
        }
    }

    void swim() {
        printf("All ducks float,even decoys!\n");
    }

    void setFlyBehavior(FlyBehavior* fb) {
        if (NULL != m_pFlyBehavior) {
            delete m_pFlyBehavior;
        }
        m_pFlyBehavior = fb;
    }

    void setQuackBehavior(QuackBehavior* qb){
        if (NULL != m_pQuackBehavior){
            delete m_pQuackBehavior;
        }
        m_pQuackBehavior = qb;
    }

protected:
    FlyBehavior* m_pFlyBehavior;
    QuackBehavior* m_pQuackBehavior;
};

class MallardDuck:public Duck {
public:
    MallardDuck() {
        m_pFlyBehavior = new FlyWithWings();
        m_pQuackBehavior = new Quack();
    }
    void display() {
        printf("I'm a real Mallard duck\n");
    }
};

