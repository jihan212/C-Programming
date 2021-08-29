#include <stdio.h>
int main()
{
    double fahrenheit, celsius;
    printf("Enter the temperature in celsius : ");
    scanf("%lf", &celsius);
    fahrenheit = ( celsius*1.8 ) + 32;
    printf("the temperature in fahrenheit is: %lf", fahrenheit);
    return 0;
}
