#include <stdio.h>
int main ()
{
    int number1, number2, value;
    char sign;
    printf("Enter a number:");
    scanf("%d", &number1);
    printf("Enter another number:");
    scanf("%d ", &number2);
    value = number1 * number2;
    sign = '*';
    printf("%d %c %d = %d", number1, sign, number2, value);
}
