//This is the line causing issue in the conflict branch
#include <stdio.h>
 
int main()
{

int a = 5;
int b = 3;

if (a % b != 0) {
   printf("The remainder is: %i", a%b);
}
   int first, second, add, subtract, multiply;
   float divide;
 
   printf("Enter two integers\n");
   scanf("%d%d", &first, &second);
 
   add        = first + second;
   subtract = first - second;
   multiply = first * second;
   divide     = first / (float)second;   //typecasting
 
   printf("Sum = %d\n",add);
   printf("Difference = %d\n",subtract);
   printf("Multiplication = %d\n",multiply);
   printf("Division = %.2f\n",divide);
 
   return 0;
}
