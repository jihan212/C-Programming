#include <stdio.h>
int main()
{
    int i, n , sum;
    scanf("%d", &n);
   /*sum = (n * ( n + 1 ))/2;*/
   sum=0;
   for( i=1; i<=n; i++){
    sum = sum + i;
   }
   printf("Sum is %d", sum);
    return 0;
}
