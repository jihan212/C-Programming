#include <stdio.h>
int main ()
{
   double num1, num2, add, sub, into, by;
   printf("Enter a number \n");
   scanf("%lf",&num1);
   printf("Enter another number \n");
   scanf("%lf",&num2);
   add = num1 + num2;
   sub = num1 - num2;
   into = num1 * num2;
   by = num1 / num2;
   printf("%lf + %lf = %lf  \n", num1, num2, add);
   printf("%lf - %lf = %lf  \n", num1, num2, sub);
   printf("%lf * %lf = %lf  \n", num1, num2, into);
   printf("%lf / %lf = %lf  \n", num1, num2, by);
    }
