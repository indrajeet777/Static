#include <iostream>
#include "Calculator.h"
#include <memory>

int main()
{
    std::unique_ptr<Calculator> calc = std::make_unique<Calculator>();
    std::cout << "Addition: " << calc->Add(5, 3) << std::endl;
    std::cout << "Subtraction: " << calc->Subtract(5, 3) << std::endl;
    return 0;
}