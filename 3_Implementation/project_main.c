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
int logarithm();
int matrix_addition();
int matrix_substraction();

int main()
{   
    int choice, result = 0, num1, num2;
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
    printf("Enter 11 for Logarithm\n");
    printf("Enter 12 for Matrix Addition\n");
    printf("Enter 13 for Matrix Substraction\n\n");
    
    while(1){    
    printf("\n\nEnter the operation you want to do: ");
    
    scanf("%d",&choice);
    if(choice==0)
    {
        exit(0);
    }
    else if(choice==1)    
    {
        printf("Enter two numbers to add: ");
        scanf("%d%d",&num1,&num2);
        result = addition(num1, num2);
        printf("The sum = %d\n", result);
        
    }   
    else if(choice==2) 
    {
        printf("Enter the numbers you want to subtract: ");
        scanf("%d%d",&num1, &num2);
        result = subtraction(num1, num2);
        printf("The substraction = %d\n", result);
        
    }
    else if(choice==3) 
    {
        printf("Enter the numbers you want to multiply: ");
        scanf("%d%d",&num1,&num2);
        result = multiplication(num1, num2);
        printf("The Multiplication = %d\n", result);
        
    }
    else if(choice==4)
    {
        division();
        
    }
    else if(choice==5)
    {   printf("Enter the numbers you want to find modulus of: ");
        scanf("%d%d",&num1,&num2);
        result = modulus(num1, num2);
        printf("The Modulus = %d\n", result);
                    
    }
     else if(choice==6)
     {
        power();
                    
    }
    else if(choice==7)
    {
        printf("Enter the number you want the factorial of: ");
        scanf("%d",&num1);
        result = factorial(num1);
        printf("The Factorial = %d\n", result);
                    
    }
    else if(choice==8)
    {
        printf("Enter the number you want the square of: ");
        scanf("%d",&num1);
        result = square(num1);
        printf("The square = %d\n", result);
    }
    else if(choice==9)
    {
        printf(" \n Please Enter any integer Value : ");
        scanf("%d", &num1);
        result = cube(num1);   
        printf("The Cube = %d\n", result);           
    }
    else if(choice==10)
    {
        squareroot();              
    }
    else if(choice==11)
    {
        logarithm();
    }
    else if(choice==12)
    {
        matrix_addition();           
    }
    else if(choice==13)
    {
        matrix_substraction();           
    }
    else
        printf("\nInvalid Option\n");
    }
    return 0;
}