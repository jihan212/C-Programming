#include <stdio.h>
int main()
{
  /*  int number, remainder;
    number = 101;
    remainder = number % 2;
    if (remainder == 0){
        printf("It's an even number.");
    } else {
    printf("It's an odd number.");
    } */
    int number, result, remainder;
    printf("Input the number: \n");
    scanf("%d",&number);
    result = number/2;
    remainder = (number-(2*result));
    if (remainder==1){
        printf("This number is odd");
    } else{
    printf("This number is even");
    }
    return 0;
}

