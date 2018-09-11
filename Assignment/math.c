#include <stdio.h>

/*
 * math.c
 *
 * Created on: Sept 10, 2018
 * Last Edited: Sept 10, 2018
 * Author: Ian Nielsen
 */

//This is the function that will be used to return the answer to the operation
int math(int num1, int num2, char Op);
// num1: First number to be calculated
// num2: Second number to be calculated
// Op: Operation to be applied to num1 and num2

int main()
{
    int n1 = 8;     // First value to be entered into the math function
    int n2 = 4;     // Second value to be entered into the math function
    char Op = '-';  // Operation to be entered into math function
    int num3;       // Placeholder variable to accept math function output
    
    //code below allows user to enter their own values for calculation
    printf("Enter first number: \n");   // asking for 1st number
    scanf("%d", &n1);                   // setting n1 to first answer
    printf("Enter second number: \n");  // asking for 2nd number
    scanf("%d", &n2);                   // setting n2 to second answer
    printf("Enter operator: \n");       // asking for operation to be done
    scanf("%c", &Op);                   // setting Op to third answer
    
    num3 = math(n1, n2, Op); // sets variable num3 to value determined by math function
    printf("%d",num3); // Printing value determined by math function
}
int math(int num1, int num2, char Op){
    // The switch function checks the operation and returns the answer based on the operation and the numbers entered into math
    // If none of the operations match then it will return num1
    switch(Op){
            // + Add (num1 + num2)
        case '+': 
            return num1+num2;
            break;
            // - Subtract (num1 - num2)
        case '-':
            return num1-num2;
            break;
            // Multiply (num1 * num2)
        case '*': 
            return num1*num2;
            break;
            // / Divide (num1 / num2)
        case '/':
            return num1/num2;
            break;
            // % Modulus (num1 % num2)
        case '%': 
            return num1%num2;
            break;
            // < Left Shift (num1 << num2)
        case '<':
            return num1<<num2;
            break;
            // > Right Shift (num1 >> num2)
        case '>': 
            return num1>>num2;
            break;
            // & Bitwise AND (num1 & num2)
        case '&':
            return num1&num2;
            break;
            // | Bitwise OR (num1 | num2)
        case '|': 
            return num1|num2;
            break;
            // ^ Bitwise XOR (num1 ^ num2)
        case '^':
            return num1^num2;
            break;
            // ~ Bitwise Inverse (~num1) for this operation, num1 and num2 are still needed
        case '~': 
            return ~num1;
            break;
        default :
           return num1;
    }
        
    return 0;
}

 ;

