#include <stdio.h>
int main ()
{
    int n = 9;
    int i;
   /* while ( i<=10 ){
        printf("%d * %d = %d \n", n, i, n*i);
        i++;
    } */
    for ( i=1; i<=10; i++){
        printf("%d * %d = %d \n", n, i , n*i);
    }
    return 0;
}
