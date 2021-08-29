#include <stdio.h>
int find_max ( int number [], int n )
{
    int max = number [0];
    int i;
    for ( i=1; i<n; i++ ){
        if ( number[i] > max ){
            max = number [i];
        }
    }
    return max;
}
int main ()
{
    int number [] = { 100,2,53,22,83,23,89,-132,215,3,85,52,57,30,-17 };
    int n = 15;
    int max = find_max ( number, n );
    printf("%d \n", max);
    return 0;
}
