
#include <iostream>
#include <memory>
#include "CalculatorFactory.h"


int main() {
    int choice;
    std::cout << "Select Calculator Type:\n1. Scientific\n2. Programmer\n3. Normal\nChoice: ";
    std::cin >> choice;

    CalculatorType type;
    switch (choice) {
        case 1: type = CalculatorType::Scientific; break;
        case 2: type = CalculatorType::Programmer; break;
        case 3: type = CalculatorType::Normal; break;
        default: std::cout << "Invalid choice. Using Normal Calculator.\n"; type = CalculatorType::Normal;
    }

    auto calc = CalculatorFactory::createCalculator(type);
    std::cout << "Addition: " << calc->add(5, 3) << std::endl;
    std::cout << "Subtraction: " << calc->subtract(5, 3) << std::endl;
    std::cout << "Multiplication: " << calc->multiply(5, 3) << std::endl;
    std::cout << "Division: " << calc->divide(5, 3) << std::endl;
    return 0;
}