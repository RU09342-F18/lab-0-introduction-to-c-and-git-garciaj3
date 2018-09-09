/* 
 * File: math.c
 * Name: Jan Garcia
 * Course: Intro to Embedded Systems
 * Section: 1
 * Data: 9/8/18
 * Lab 0 
 *
 * NOTE: This file is the source file "math.c"
 * and needs the header file "math.h" to work.
 *
 * Description: This file contains 11 basic math operations: add (+), 
 * subtract (-), multiply (*), divide (/), modulus (%), left shift (<), 
 * right shift (>), bitwise AND (&), bitwise OR (|), bitwise XOR (^), and 
 * bitwise Inverse (~). 
 * The math function takes two input numbers and one character sign and returns
 * the answer as an output.
 * 
 * NOTE: When using the bitwise Inverse operation, if the first number is used 
 * then input a ZERO for the second number, otherwise the second number will be 
 * used during the operation. 
 *
 * e.g. math(35,0,'~');
 * 
 * Operation: ~
 * Inputs : 35 and 0
 * Output: -36
 * 
 */

#include <stdio.h>
#include "math.h"

/* Testing for math function 

int main (void)
{
    int number1;
    int number2;
    char Operator;
    
    printf(" Enter a valid operation using two numbers: ");
    scanf( "%d%c%d", &number1, &Operator, &number2);
    
    printf("Result is: %d", math(number1, number2, Operator));
    return 0;
}
*/


int math(int num1, int num2, char Operator)
{
    // Output variable
    int result;
    
    /* 
     * All if statements in this function are comparing the char variable 
     * "Operator" with any of the 11 operations. 
    */
    
    // add operation
    if (Operator == '+')
    {
        result = num1 + num2;
        return result;
    }
    
    // subtract operation
    if (Operator == '-')
    {
        result = num1 - num2;
        return result;
    }
    
    // multiply operation
    if (Operator == '*')
    {
        result = num1 * num2;
        return result;
    }
    
    // divide operation
    if (Operator == '/')
    {
        result = num1 / num2;
        return result;
    }
    
    // modulus operation
    if (Operator == '%')
    {
        result = num1 % num2;
        return result;
    }
    
    // shift left operation
    if (Operator == '<')
    {
        result = num1 << num2;
        return result;
    }
    
    // shift right operation
    if (Operator == '>')
    {
        result = num1 >> num2;
        return result;
    }
    
    // bitwise AND operation
    if (Operator == '&')
    {
        result = num1 & num2;
        return result;
    }
    
    // bitwise OR operation
    if (Operator == '|')
    {
        result = num1 | num2;
        return result;
    }
    
    // bitwise XOR operation
    if (Operator == '^')
    {
        result = num1 ^ num2;
    }
    
    // bitwise inverse operation
    if (Operator == '~' && num2 == 0)
    {
        result = ~ num1;
        return result;
    }
    else 
    {
        result = ~ num2;
        return result;
    }
}
