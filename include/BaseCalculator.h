#pragma once

class BaseCalculator {
public:
    virtual ~BaseCalculator() = default;
    virtual double add(double a, double b) const = 0;
    virtual double subtract(double a, double b) const = 0;
    virtual double multiply(double a, double b) const = 0;
    virtual double divide(double a, double b) const = 0;
};
