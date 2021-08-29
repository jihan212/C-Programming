#include <stdio.h>
int main ()
{
    int number[2][3];
    int i,j;
    for ( i=0; i<2; i++ ){
        for ( j=0; j<3; j++ ){
            printf("Enter the value for number[%d][%d]: ",i,j);
            scanf("%d", &number[i][j]);
        }
    }
    printf("Two dimensional array elements: \n");
    for ( i=0; i<2; i++ ){
        for ( j=0; j<3; j++ ){
            printf("%d  ", number[i][j]);
            if(j==2){
                printf("\n");
            }
        }
    }
    return 0;
}
