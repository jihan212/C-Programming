#include <stdio.h>
int main()
{
    int number[] = { 1,2,3,4,5,6,7,8,9,10 };
    int i,j,temp;
    for ( i=0, j=9; i<10; i++, j-- ){
       temp = number[j];
       number[j] = number[i];
       number[i] = temp;
    }
    for ( i=0; i<10; i++ ){
        printf("%d \n", number[i]);
    }
    return 0;
}
