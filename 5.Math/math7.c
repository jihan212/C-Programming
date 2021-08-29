#include <stdio.h>
int main()
{
    double fahrenheit, celsius;
    printf("Enter the temperature in fahrenheit: ");
    scanf("%lf", &fahrenheit);
    celsius = (( fahrenheit - 32 ) *5 ) /9;
    printf("the temperature in celsius is: %lf", celsius);
    return 0;
}
