#pragma once
#include "BaseCalculator.h"

class NormalCalculator : public BaseCalculator {
public:
    double add(double a, double b) const override;
    double subtract(double a, double b) const override;
    double multiply(double a, double b) const override;
    double divide(double a, double b) const override;
};
