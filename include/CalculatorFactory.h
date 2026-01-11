#pragma once
#include <memory>
#include "BaseCalculator.h"
#include "ScientificCalculator.h"
#include "ProgrammerCalculator.h"
#include "NormalCalculator.h"

enum class CalculatorType {
    Scientific,
    Programmer,
    Normal
};

class CalculatorFactory {
public:
    static std::unique_ptr<BaseCalculator> createCalculator(CalculatorType type);
};
