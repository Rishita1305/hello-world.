/**  
 * @file Calculator.h  
 * @brief Header file for the Calculator class.  
 *  
 * This file contains the declaration of the Calculator class,  
 * which provides basic arithmetic operations.  
 *  
 * @author Your Name  
 * @date 2025-02-02  
 */

#ifndef CALCULATOR_H
#define CALCULATOR_H

/**  
 * @class Calculator  
 * @brief A simple calculator class that performs basic arithmetic operations.  
 */
class Calculator {
public:
    /**  
     * @brief Adds two numbers.  
     * @param a First number.  
     * @param b Second number.  
     * @return The sum of a and b.  
     */
    double add(double a, double b);

    /**  
     * @brief Subtracts two numbers.  
     * @param a First number.  
     * @param b Second number.  
     * @return The difference (a - b).  
     */
    double subtract(double a, double b);

    /**  
     * @brief Multiplies two numbers.  
     * @param a First number.  
     * @param b Second number.  
     * @return The product of a and b.  
     */
    double multiply(double a, double b);

    /**  
     * @brief Divides two numbers.  
     * @param a Numerator.  
     * @param b Denominator (must not be zero).  
     * @return The quotient (a / b).  
     * @throws std::runtime_error if b is zero.  
     */
    double divide(double a, double b);
};

#endif
