#include <stdio.h>
int main()
{
    int a, b, x, t, gcd;
    scanf("%d", &a);
    scanf("%d", &b);
    if ( a==0 ) gcd = a;
    else if ( b==0 ) gcd = b;
    else{
        while( b!=0 ){
            t = b;
            b = a%b;
            a = t;
        }
        gcd = a;
    }
    printf("GCD is : %d", gcd);
    return 0;
}
