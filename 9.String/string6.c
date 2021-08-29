/*#include <stdio.h>
int string_compare ( char a[], char b[] )
{
    int i,j;
    for ( i=0; a[i] != '\0' && b[i] != '\0'; i++ ){
        if ( a[i] < b[i] ){
            return -1;
        }
                if ( a[i] < b[i] ){
            return 1;
        }
    }
    if ( string_length(a) == string_length(b)){
        return 0;
    }
     if ( string_length(a) < string_length(b)){
        return -1;
    }
     if ( string_length(a) < string_length(b)){
        return 1;
    }
}*/
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "abcd", str2[] = "ABCD";
    int result;

    result = strcmp(str1, str2);
    printf("%d\n", result);

    return 0;
}
