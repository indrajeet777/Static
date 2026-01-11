#include "CalculatorFactory.h"

std::unique_ptr<BaseCalculator> CalculatorFactory::createCalculator(CalculatorType type) {
    switch (type) {
        case CalculatorType::Scientific:
            return std::make_unique<ScientificCalculator>();
        case CalculatorType::Programmer:
            return std::make_unique<ProgrammerCalculator>();
        case CalculatorType::Normal:
            return std::make_unique<NormalCalculator>();
        default:
            return nullptr;
    }
}
