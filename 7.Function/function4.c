#include <stdio.h>
int find_min ( int number [], int n )
{
    int min = number [0];
    int i;
    for ( i=1; i<n; i++ ){
        if ( number[i] < min ){
            min = number [i];
        }
    }
    return min;
}
int main ()
{
    int number [] = { 100,2,53,22,83,23,89,-132,215,3,85,52,57,30,-17 };
    int n = 15;
    int min = find_min ( number, n );
    printf("%d \n", min);
    return 0;
}
