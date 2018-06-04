#pragma once
#include "CaffeineBeverage.h"
class Coffee : public CaffeineBeverage {
private:
    void brew() override;
    void addCondiments() override;
    bool customerWantsCondiments() override;
};
