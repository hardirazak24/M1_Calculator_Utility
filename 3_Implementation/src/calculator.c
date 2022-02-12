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
        fact=fact*i; 
    }
    return fact;
}
int power(){
      int b, e;
     long p=1;
     printf("Enter base and Exponent: ");
     scanf("%d %d",&b,&e);
     while(e!=0)
     {  p *= b; 
        e--;
     }
     printf("Result = %ld\n", p);
     return 0;
}
int square(int n){
    return n*n;
}
int cube(int n){
  return n*n*n;
}
int squareroot(){
    double n,sr;
    printf("Enter the number you want the square root of : ");
    scanf("%lf",&n);
    sr = sqrt(n);
    printf("The square root = %lf",sr);
    return 0;
}

int logarithm()
{
  double a, logx;
  printf("Enter a number to calculate its log\n");
  scanf("%lf", &a);
  logx = log(a);
  printf("log  = %lf\n", logx);
  return 0;
}
int matrix_addition(){
    int m, n, a[10][10], b[10][10], sum[10][10], i, j;
  printf("Enter the number of rows: ");
  scanf("%d", &m);
  printf("Enter the number of columns: ");
  scanf("%d", &n);
  printf("\nEnter elements of 1st matrix:\n");
  for (i = 0; i < m; ++i)
    for (j = 0; j < n; ++j) 
      scanf("%d", &a[i][j]);
  printf("Enter elements of 2nd matrix:\n");
  for (i = 0; i < m; ++i)
    for (j = 0; j < n; ++j) 
      scanf("%d", &b[i][j]);
  for (i = 0; i < m; ++i)
    for (j = 0; j < n; ++j) {
      sum[i][j] = a[i][j] + b[i][j];
    }
  printf("\nSum of two matrices: \n");
  for (i = 0; i < m; ++i)
    for (j = 0; j < n; ++j) {
      printf("%d   ", sum[i][j]);
      if (j == n - 1) {
        printf("\n\n");
      }
    }
  return 0;
}
int matrix_substraction(){
    int m, n, i, j, a[10][10], b[10][10], sub[10][10];  
    printf("Enter the number of rows and columns of matrix\n");  
    scanf("%d%d", & m, & n);  
    printf("Enter the elements of first matrix\n");  
    for (i = 0; i < m; i++)  
        for (j = 0; j < n; j++) scanf("%d", & a[i][j]);  
    printf("Enter the elements of second matrix\n");  
    for (i = 0; i < m; i++)  
        for (j = 0; j < n; j++) scanf("%d", & b[i][j]);  
    printf("Difference of entered matrices:-\n");  
    for (i = 0; i < m; i++)   
    {  
        for (j = 0; j < n; j++)   
        {  
            sub[i][j] = a[i][j] - b[i][j];  
            printf("%d\t", sub[i][j]);  
        }  
        printf("\n");  
    }  
    return 0;  
}