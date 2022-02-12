#include "calculator.h"
#include<stdio.h>
#include<math.h>

int addition(int operand1, int operand2)
{
    return operand1 + operand2;
}
int subtraction(int operand1, int operand2)
{
    return operand1-operand2;
}
int multiplication(int a, int b){
    return a*b;
}
int division(){
    printf("Enter the numbers you want to divide: ");
    int a,b;
    scanf("%d%d",&a,&b);
    printf("The Division = %f\n ",(float)a/(float)b);
    return 0;
}
int modulus(int mod1, int mod2)
{
    return mod1%mod2;
}
int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i; // factorial*=i;
    }
    return fact;
}
int power(){
    double base;
    double power;
    printf("Enter the base and the power: ");
    scanf("%lf%lf",&base,&power);
    double e=pow(base,power);
    printf("The power is %lf",e);
    return 0;
}
int square(){
    double b;
    printf("Enter the number you want the square of: ");
    scanf("%lf",&b);
    double p=pow(b,2);
    printf("The square of %lf is %lf",b,p);
    return 0;
}
int cube(){
    double b;
    printf("Enter the number you want the cube of: ");
    scanf("%lf",&b);
    double p=pow(b,3);
    printf("The cube of %lf is %lf",b,p);
    return 0;
}
int squareroot(){
    double b;
    printf("Enter the number you want the square root of : ");
    scanf("%lf",&b);
    double s = sqrt(b);
    printf("The square root of %lf is %lf",b,s);
    return 0;
}

int logarithm()
{
  double n, result;

  printf("Enter a number to calculate its natural logarithm (base = e)\n");
  scanf("%lf", &n);

  result = log(n);

  printf("Natural log of %.2lf = %lf\n", n, result);

  return 0;
}
int matrix_addition(){
    int r, c, a[10][10], b[10][10], sum[10][10], i, j;
  printf("Enter the number of rows (between 1 and 100): ");
  scanf("%d", &r);
  printf("Enter the number of columns (between 1 and 100): ");
  scanf("%d", &c);

  printf("\nEnter elements of 1st matrix:\n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      printf("Enter element a%d%d: ", i + 1, j + 1);
      scanf("%d", &a[i][j]);
    }

  printf("Enter elements of 2nd matrix:\n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      printf("Enter element b%d%d: ", i + 1, j + 1);
      scanf("%d", &b[i][j]);
    }

  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      sum[i][j] = a[i][j] + b[i][j];
    }

  printf("\nSum of two matrices: \n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      printf("%d   ", sum[i][j]);
      if (j == c - 1) {
        printf("\n\n");
      }
    }

  return 0;
}
int matrix_substraction(){
    int m, n, c, d, first[10][10], second[10][10], difference[10][10];  
    printf("Enter the number of rows and columns of matrix\n");  
    scanf("%d%d", & m, & n);  
    printf("Enter the elements of first matrix\n");  
    for (c = 0; c < m; c++)  
        for (d = 0; d < n; d++) scanf("%d", & first[c][d]);  
    printf("Enter the elements of second matrix\n");  
    for (c = 0; c < m; c++)  
        for (d = 0; d < n; d++) scanf("%d", & second[c][d]);  
    printf("Difference of entered matrices:-\n");  
    for (c = 0; c < m; c++)   
    {  
        for (d = 0; d < n; d++)   
        {  
            difference[c][d] = first[c][d] - second[c][d];  
            printf("%d\t", difference[c][d]);  
        }  
        printf("\n");  
    }  
    return 0;  
}