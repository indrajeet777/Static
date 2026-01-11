#include "ScientificCalculator.h"

double ScientificCalculator::add(double a, double b) const { return a + b; }
double ScientificCalculator::subtract(double a, double b) const { return a - b; }
double ScientificCalculator::multiply(double a, double b) const { return a * b; }
double ScientificCalculator::divide(double a, double b) const { return a / b; }
double ScientificCalculator::power(double base, double exp) const { return std::pow(base, exp); }
double ScientificCalculator::sqrt(double value) const { return std::sqrt(value); }
