#include<stdio.h>
#include<stdlib.h>
#include<math.h>

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

int main(){
    int choice;
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
                    addition();
                    break;
                case 2:
                    subtraction();
                    break;
                case 3:
                    multiplication();
                    break;
                case 4:
                    division();
                    break;
                case 5:
                    modulus();
                    break;
                case 6:
                    power();
                    break;
                case 7:
                    factorial();
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
    return 0;
}

int addition(){
    printf("Enter two numbers to add: ");
    int operand1, operand2, sum=0;
    scanf("%d%d",&operand1,&operand2);
    sum = operand1 + operand2;
    printf("The sum of %d and %d is  %d\n", operand1, operand2, sum);
    return 0;
}
int subtraction(){
    printf("Enter the numbers you want to subtract: ");
    int operand1,operand2;
    scanf("%d%d",&operand1, &operand2);
    printf("The subtraction is %d\n",operand1-operand2);
    return 0;
}
int multiplication(){
    printf("Enter the numbers you want to multiply: ");
    int a,b;
    scanf("%d%d",&a,&b);
    printf("The multiplication is %d\n",a*b);
    return 0;
}
int division(){
    printf("Enter the numbers you want to divide: ");
    int a,b;
    scanf("%d%d",&a,&b);
    printf("The division is %f\n",(float)a/(float)b);
    return 0;
}
int modulus(){
    printf("Enter the numbers you want to find modulus of: ");
    int a,b;
    scanf("%d%d",&a,&b);
    printf("The modulus of a and b is %d\n",a%b);
    return 0;
}
int factorial(){
    int n,factorial;
    printf("Enter the number you want the factorial of: ");
    scanf("%d",&n);
    factorial=1;
    for(int i=1;i<=n;i++){
        factorial=factorial*i; // factorial*=i;
    }
    printf("\nFactorial of %d is %d",n,factorial);
    return 0;
}
int power(){
    double b;
    double p;
    printf("Enter the base and the power: ");
    scanf("%lf%lf",&b,&p);
    double e=pow(b,p);
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