#pragma once
#include "BaseCalculator.h"
#include <cmath>

class ScientificCalculator : public BaseCalculator {
public:
    double add(double a, double b) const override;
    double subtract(double a, double b) const override;
    double multiply(double a, double b) const override;
    double divide(double a, double b) const override;
    double power(double base, double exp) const;
    double sqrt(double value) const;
};
