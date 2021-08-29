#include <stdio.h>
int main()
{
    int num1, num2, add, sub, into, by;
    printf("Enter a number \n");
    scanf("%d \n", &num1);
    printf("Enter another number\n");
    scanf("%d \n", &num2);
    add = num1 + num2;
    sub = num1 - num2;
    into = num1 * num2;
    by = num1 / num2;
    printf("%d + %d = %d \n", num1, num2,add);
    printf("%d - %d = %d \n", num1, num2,sub);
    printf("%d * %d = %d \n", num1, num2,into);
    printf("%d / %d = %d \n", num1, num2,by);
}
