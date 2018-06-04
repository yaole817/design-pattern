#pragma once
#include "CaffeineBeverage.h"
class Tea : public CaffeineBeverage {
private:
    void brew() override;
    void addCondiments() override;
    bool customerWantsCondiments() override;
};