#include "calculator.h"
extern void test_main();

#include<stdio.h>
#include<stdlib.h>

int addition();
int subtraction();
int multiplication();
int division();
int modulus();
int factorial();
int power();
int square();
int cube();
int squareroot();
int matrix_addition();
int matrix_substraction();

int main()
{   
    #if 0
    int choice, result = 0, num1, num2, s1=0, s2=1;
    printf("\t\tScientific calculator!!\n\n");
    printf("Enter 0 to quit the program\n");
    printf("Enter 1 to perform Addition \n");
    printf("Enter 2 to perform Subtraction \n");
    printf("Enter 3 to perform Multiplication \n");
    printf("Enter 4 to perform Division \n");
    printf("Enter 5 to perform Modulus\n");
    printf("Enter 6 to perform Power \n");
    printf("Enter 7 to find Factorial of a number \n");
    printf("Enter 8 to find square of a number \n");
    printf("Enter 9 to find cube of a number \n");
    printf("Enter 10 for squareroot\n");
    printf("Enter 11 for Matrix Addition\n");
    printf("Enter 12 for Matrix Substraction\n\n");
    
    while(1){    
    printf("\n\nEnter the operation you want to do: ");
    
    scanf("%d",&choice);
            
    switch(choice)
    {
                case 1:
                    result = addition(num1, num2);
                    printf("The sum = %d\n", result);
                    break;
                case 2:
                    result = subtraction(num1, num2);
                    printf("The substraction = %d\n", result);
                    break;
                case 3:
                    result = multiplication(num1, num2);
                    printf("The Multiplication = %d\n", result);
                    break;
                case 4:
                    division();
                    break;
                case 5:
                    result = modulus(s2);
                    printf("The Modulus = %d\n", result);
                    break;
                case 6:
                    power();
                    break;
                case 7:
                    result = factorial(s2);
                    printf("The Factorial = %d\n", result);
                    break;
                case 8:
                    square();
                    break;
                case 9:
                    cube();
                    break;
                case 10:
                    squareroot();
                    break;
                case 11:
                    matrix_addition();
                    break;
                case 12:
                    matrix_substraction();
                    break;
                case 0:
                    exit(0);
                default:
                    break;
        }
    
    }
    #else
    test_main();
    #endif
    return 0;
}