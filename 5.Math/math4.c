#include <stdio.h>
int main()
{
    char u, a, t, v, d;
    printf("Enter the velocity: ");
    scanf(&v);
    printf("Enter the time: ");
    scanf(&t);
    d = u* 2*t + 0.5*a*t*t;
    printf("Distance s =", d);
    return 0;
}
