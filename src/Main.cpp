#include <iostream>
#include "Calculator.h"

int main()
{
    Calculator calc;
    std::cout << "Addition: " << calc.Add(5, 3) << std::endl;
    std::cout << "Subtraction: " << calc.Subtract(5, 3) << std::endl;
    return 0;
}