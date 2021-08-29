#include <stdio.h>
int main()
{
    int number[] = { 1,2,3,4,5,6,7,8,9,10 };
    int number2 [10];
    int i,j;
    for ( i=0, j=9; i<10; i++, j-- ){
        number2[j] = number [i];
    }
    for ( i=0; i<10; i++ ){
        number[i] = number2[i];
    }
    for ( i=0; i<10; i++ ){
        printf("%d \n", number[i]);
    }
    return 0;
}
