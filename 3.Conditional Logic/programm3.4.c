#include <stdio.h>
int main ()
{
    char letter ='j';
    if ( letter >= 'a' && letter <= 'z'){
        printf("This letter is lowercase");
    } else if ( letter >='A' && letter <= 'Z'){
        printf("This letter is uppercase");
    }
    return 0;
}
