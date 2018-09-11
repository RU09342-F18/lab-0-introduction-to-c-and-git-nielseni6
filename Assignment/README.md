# Lab 0: Introduction to C, Git, and the MSP430

Ian Nielsen
Embedded Systems Section 4
September 10, 2018

## Description

This project is a simple calculator that that takes three inputs in the form:

	'Number1' 'Operation' 'Number2'
  
The first input that is asked for is the "Number1"

	-This number must be an integer
  
The second input that is asked for is the "Number2"

  	-This number must be an integer
  
The third input that is asked for is the "Operation"

  	-This value must be a single character
  
 	-Characters that work include:
  
  
  		=> + Add (Number1 + Number2)           
  
  		=> - Subtract (Number1 - Number2)      
  
  		=> * Multiply (Number1 * Number2)      
  
  		=> / Divide (Number1 / Number2)        
  
  		=> % Modulus (Number1 % Number2)       
  
  		=> < Left Shift (Number1 << Number2)   
  
  		=> > Right Shift (Number1 >> Number2)  
  
  		=> & Bitwise AND (Number1 & Number2)   
  
  		=> | Bitwise OR (Number1 | Number2)    
  
  		=> ^ Bitwise XOR (Number1 ^ Number2)   
  
  		=> ~ Bitwise Inverse (~Number1)        
  
  
Once all three of these values are entered the answer is printed as an output.


Example Output:

	Enter first number: 8

	Enter second number: 4

	Enter operator: *

	32


Operation above: 8 * 4 = 32

## Valid Inputs/Outputs

The inputs of this function within the code are:

	num1, num2 & Op
	
The one output in the code is:

	num3

## File Location

All files required to run this program are located within the Assignment folder along with this readme. The math function is created and called in the math.c file. There is a main function within the file that calls the math function.

## Running Program

Copy code of math.c into a compiler. One option to use is an online compiler like the one here:
https://www.tutorialspoint.com/compile_c_online.php
Once copied into the compiler execute and entered asked values into the command line as described in description.

