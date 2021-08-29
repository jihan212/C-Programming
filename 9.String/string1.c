#include <stdio.h>
int main()
{
    char country [11] = { 'B','a','n','g','l','a','d','e','s','h', '\0' };
char country1 [] = { 'B','a','n','g','l','a','d','e','s','h', '\0' };
char country2 [] = "Bangladesh";
char *country3 = "Bangladesh";

printf("Name of the country is : %s \n\n", country);
printf("Name of the country is : %s \n\n", country1);
printf("Name of the country is : %s \n\n", country2);
printf("Name of the country is : %s \n\n", country3);
}
