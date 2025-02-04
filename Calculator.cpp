/**  
 * @file Calculator.cpp  
 * @brief Implementation of the Calculator class.  
 */

#include "Calculator.h"
#include <stdexcept>

/**  
 * @brief Adds two numbers.  
 */
double Calculator::add(double a, double b) {
    return a + b;
}

/**  
 * @brief Subtracts two numbers.  
 */
double Calculator::subtract(double a, double b) {
    return a - b;
}

/**  
 * @brief Multiplies two numbers.  
 */
double Calculator::multiply(double a, double b) {
    return a * b;
}

/**  
 * @brief Divides two numbers. Throws an exception if dividing by zero.  
 */
double Calculator::divide(double a, double b) {
    if (b == 0) {
        throw std::runtime_error("Error: Division by zero!");
    }
    return a / b;
}
