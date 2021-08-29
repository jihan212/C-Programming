#include <stdio.h>
int main ()
{
   int num1, num2,sum1, sum2, sum3, sum4;
   printf("Enter a number \n");
   scanf("%d",&num1);
   printf("Enter another number \n");
   scanf("%d",&num2);
   char  add, sub, into, by;
   add = '+';
   sub = '-';
   into = '*';
   by = '/';
   sum1 = num1 + num2;
   sum2 = num1 - num2;
   sum3 = num1 * num2;
   sum4 = num1 / num2;
   printf("%d  %c = %d  \n", num1, add,sum1);
   printf("%d  %c = %d  \n", num1, sub, sum2);
   printf("%d  %c = %d  \n", num1, into, sum3);
   printf("%d  %c = %d  \n", num1, by, sum4);
    }
