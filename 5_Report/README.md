# Requirements
## Introduction
* Mathematical operations are a part of our daily lives. Everyday we will be involving with various types of calculations around us. A Scientific calculator is a device which can perform some mathematical operations like arthmetic operations & scinetific operations i.e here In this project we are going to implement some calculator operations using C Language. 
* This calculator can perform mathematical operations such as addition, subtraction, multiplication, division, modulus, factorial, square root, power, matrix addition and matrix substraction.

## Research
This Calculator doesn't involve any complex operations. It is easy to apply the values in this program to find the result rather than remembering and applying it in formula. Thus by studying all these facts, the necessary functions has been implemented to get the required results in a better way.

## Cost and Features
The cost for implementing this project is minimal to none
#### Features
* Options to select the operation
* Separate function for each operation
* Designing each module with readme files
* Unit Testing the code with various testcases
* Implimentation of Multifile and Makefile

## SWOT Analysis
![swot](https://user-images.githubusercontent.com/73360521/153700046-fe863a6d-215a-4e4f-896d-80ae81edeff4.jpg)

## 4W's and 1'H
### Who:
* All the students and employess who requires the calculations will use the program to find their answer. The main objective of this project is that user should be satisfied with freindly interface and fast calculation
### What:
* Calculate the mathematical operation such as Addition, Substraction, Multiplication, Division, power, squareroot, logarithm and Matrix addition and substraction.
* It's free and can be easily used by people of all ages
### When:
* Students facing a difficulty in solving a mathematical problem, can use this program to confirm their outputs.
* Researchers can use it for getting a quick calculation output.
### Where:
* In all the Domains it can be used
* Students, employees and researchers from all over the world.
### How:
* This program can be executed in a system which has Linux or Windows operating system.
* The Project is going to be implemented in C language
* The constraints of the project are to develop it using industry level standards with a multi-file approach.

# Detail requirements
## High Level Requirements:
| ID | Description | Category | Status |
| --- | --- | --- | --- |
| HR01 | User should be able to view the operation list | Technical | IMPLEMENTED  |
| HR02 | User should be able to select the required operation | Technical |  IMPLEMENTED |
| HR03 | The program sould be able perform the selected operation | Technical |  IMPLEMENTED |
| HR04 | The program should give the correct result for the given operation | Technical | IMPLEMENTED  |

## Low level Requirements:
| ID | Description | HLR ID | Status |
| --- | --- | --- | --- |
| LR01 | User must choose an option from the given menu | HR01 | IMPLEMENTED  |
| LR02 | When given zero the program should end | HR02 |  IMPLEMENTED |
| LR03 | User must specify two variables to implement the choosen operation | HR03 |  IMPLEMENTED |
| LR04 | When user performs the first option the result should be sum of two numbers | HR03 | IMPLEMENTED  |
| LR05 | When user performs the Second option the result should be subtraction of two numbers | HR03 | IMPLEMENTED  |
| LR06 | When user performs the third option the result should be multiplication of two numbers | HR03 | IMPLEMENTED  |
| LR07 | When user performs the fourth option the result should be division of two numbers | HR03 | IMPLEMENTED  |
| LR08 | When user performs the fifth option the result should be to find modulus | HR03 | IMPLEMENTED  |
| LR09 | When user performs the sixth option the result should be to find factorial of a number | HR03 | IMPLEMENTED  |
| LR010 | When user performs the seventh option the result should be to find power | HR03 | IMPLEMENTED  |
| LR011 | When user performs the eighth option the result should be to find square | HR03 | IMPLEMENTED  |
| LR012 | When user performs the nineth option the result should be to find cube | HR03 | IMPLEMENTED  |
| LR013 | When user performs the option ten the result should be to find squareroot | HR03 | IMPLEMENTED  |
| LR014 | When user performs the option eleven the result should be to find logarithm | HR03 | IMPLEMENTED  |
| LR015 | When user performs the option twelve the result should be to find matrix addition | HR03 | IMPLEMENTED  |

# Behavior Diagram 
## Flow Chart
![flow](https://user-images.githubusercontent.com/73360521/153636298-345bb1ee-99c3-4022-baea-c9adb4d3ba33.png)

# Structural Diagram
## Components Diagram
![Struct_Diag](https://user-images.githubusercontent.com/73360521/153625004-a404f709-c4cd-47e6-bd5d-594b2031dd38.png)

# TEST PLAN AND OUTPUT
## Table no - High level test plan
| TEST ID | Description | EXP I/P | EXP O/P | STATUS | Type of Test |
| --- | --- | --- | --- | --- | --- |
| H_01 | Check if the code is being executed properly | Valid Input | Correct output | PASS | Technical |
| H_02 | Check if the menu is displayed properly | Choice | Formatted option page | PASS | Technical |
| H_03 | Not Stuck inside any of the Function | Function call | Proper function execution with return type | PASS | Technical |
| H_04 | Check if all the functions are working properly | Function call | Proper function execution | PASS | Technical |

## Table no - Low level test plan
| TEST ID | Description | EXP I/P | EXP O/P | STATUS | Type of Test |
| --- | --- | --- | --- | --- | --- |
| L_01 | Performing Addition operation | 20,10 | 30 | PASS | Technical |
| L_02 | Performing Subtraction operation | 20,10 | 10 | PASS | Technical |
| L_03 | Performing Multiplication operation | 20,10 | 200 | PASS | Technical |
| L_04 | Performing Division operation | 20,10 | 2 | PASS | Technical |
| L_05 | Performing Modulus operation | 20,10 | 0 | PASS | Technical |
| L_06 | Performing Factorial operation | 5 | 120 | PASS | Technical |
| L_07 | Performing power operation | 2,4 | 16 | PASS | Technical |
| L_08 | Performing square operation | 8 | 64 | PASS | Technical |
| L_09 | Performing cube operation | 5 | 125 | PASS | Technical |
| L_010 | Performing Square root operation | 144 | 12 | PASS | Technical |
| L_011 | Performing Logarithm operation | 5 | 0.6989 | PASS | Technical |
