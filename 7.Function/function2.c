#include <stdio.h>
double pi = 3.14;
void my_pi()
{
    pi = 3.1416;
    return ;
}
int main ()
{
    printf("%lf \n", pi);
    my_pi();
    printf("%lf \n", pi);
}
