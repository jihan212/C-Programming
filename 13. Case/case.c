#include<stdio.h>

int  main( )
{

   int  a=10,b=20,c=30;

   printf("Value  of  A:  %d",a);
   printf("\n");
   printf("Value  of  B:  %d",b);
   printf("\n");
   printf("Value  of  C:  %d",c);
   printf("\n");

   int  sum;
   sum=a+c;

   printf("Value of case1:  %d",sum);
   printf("\n");

   sum=b+a;
   printf("Value of case2:  %d",sum);
   printf("\n");

   sum=c+b;
   printf("Value of case3:  %d",sum);
   printf("\n");

   sum=(a+c)*(b+a)*(c+b);
   printf("Value of case4:  %d",sum);
   printf("\n");

   sum=(b+a)*(c+b);
   printf("Value of case5:  %d",sum);
   printf("\n");

   sum=((a+c)*(b+a)*(c+b))/((b+a)*(c+b));
   printf("Value of case6:  %d",sum);
   printf("\n");
}
