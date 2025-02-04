/**  
 * @file main.cpp  
 * @brief Test program for the Calculator class.  
 */

#include <iostream>
#include "Calculator.h"

int main() {
    Calculator calc;

    double a = 10, b = 5;

    std::cout << "Addition: " << calc.add(a, b) << std::endl;
    std::cout << "Subtraction: " << calc.subtract(a, b) << std::endl;
    std::cout << "Multiplication: " << calc.multiply(a, b) << std::endl;
    std::cout << "Division: " << calc.divide(a, b) << std::endl;

    return 0;
}
