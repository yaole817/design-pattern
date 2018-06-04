#pragma once
class CaffeineBeverage {
public:
    void prepareRecipe();
private:
    virtual void brew() = 0;
    virtual void addCondiments() = 0;
    void boilWater();
    void pourInCup();
    virtual bool customerWantsCondiments(); 
}; 
