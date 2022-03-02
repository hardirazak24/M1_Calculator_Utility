/**
 * @file calculator.h
 * @author Hadi Abdul Razak
 * @brief This Project is about Scientific Calculator
 * @version 0.1
 * @date 2022-03-02
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef CALCULATOR_H_
#define CALCULATOR_H_

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/**
 * @brief Here this function is going to add two numbers
 * 
 * @param num1 
 * @param num2 
 * @return int 
 */
int addition(int num1, int num2);

/**
 * @brief Here this function is going to Substract two numbers
 * 
 * @param num1 
 * @param num2 
 * @return int 
 */
int subtraction(int num1, int num2);

/**
 * @brief Here this function is going to do Multiplication of two numbers
 * 
 * @param num1 
 * @param num2 
 * @return int 
 */
int multiplication(int num1, int num2);

/**
 * @brief Here this function is going to do Division of two numbers
 * 
 * @return int 
 */
int division();

/**
 * @brief Here this function is going to do Modulus of two numbers
 * 
 * @param num1 
 * @param num2 
 * @return int 
 */
int modulus(int num1, int num2);

/**
 * @brief Here this function is going to find the factorial of a number
 * 
 * @param num1 
 * @return int 
 */
int factorial(int num1);

/**
 * @brief Here this function is going to find the power of a number
 * 
 * @return int 
 */
int power();

/**
 * @brief Here this function is going to find the square of a number
 * 
 * @param num1 
 * @return int 
 */
int square(int num1);

/**
 * @brief Here this function is going to find the cube of a number
 * 
 * @param num1 
 * @return int 
 */
int cube(int num1);

/**
 * @brief Here this function is going to find the squareroot of a number
 * 
 * @return int 
 */
int squareroot();

/**
 * @brief Here this function is going to find the logarithm of a number
 * 
 * @return int 
 */
int logarithm();

/**
 * @brief Here this function is going to find the Matrix addition
 * 
 * @return int 
 */
int matrix_addition();

/**
 * @brief Here this function is going to find the Matrix Substraction
 * 
 * @return int 
 */
int matrix_substraction();
#endif
