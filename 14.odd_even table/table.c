#include <stdio.h>

int main()
{
    int i, num, result;

    /* Input a number to print table */
    printf("Enter number to print table: ");
    scanf("%d", &num);

    for (i = 1; i <= 10; i++)
    {
        result = (num * i);
        printf("%d * %d = %d. ", num, i, result);

        if (result % 2 == 0)
            printf("%d is even.\n", result);
        else
            printf("%d is odd.\n", result);
    }

    return 0;
}