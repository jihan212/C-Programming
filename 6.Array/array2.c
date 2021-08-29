#include <stdio.h>
int main()
{
    int number [10] = { 1,2,3,4,5,6,7,8,9,10};
    int i;
    for ( i=9; i<10; i--){
        printf("The number of array is: %d  \n", number[i]);
        if( i < 0 ){
            break;
        }
    }
    return 0;
}
