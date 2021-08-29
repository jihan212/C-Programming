#include <stdio.h>
int main()
{
    char country [] = { 'B','a','n','g','l','a','d','e','s','h' };
    int i, length;
    for ( i=0; i<length; i++ ){
        if ( country [i] >= 65 && country[i] <= 90 ){
            country[i] = 'a' + ( country[i] - 'A' );
        }
    }
    printf ("%s \n", country);
    return 0;
}
