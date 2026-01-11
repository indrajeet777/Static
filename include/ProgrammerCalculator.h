#pragma once
#include "BaseCalculator.h"

class ProgrammerCalculator : public BaseCalculator {
public:
    double add(double a, double b) const override;
    double subtract(double a, double b) const override;
    double multiply(double a, double b) const override;
    double divide(double a, double b) const override;
    int bitwiseAnd(int a, int b) const;
    int bitwiseOr(int a, int b) const;
    int bitwiseXor(int a, int b) const;
};
