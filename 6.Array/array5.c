#include <stdio.h>
int main()
{
    int ft_marks [20] = { 83,86,97,95,93,95,86,52,49,41,42,47,90,59,63,86,40,46,92,56 };
    int st_marks [20] = { 86,97,95,93,95,86,52,49,41,42,47,90,59,63,86,40,46,92,56,51 };
    int final_marks [20] = { 87,64,91,43,89,66,58,73,99,81,100,64,55,69,85,81,67,88,71 };
    int i;
    double total_marks [20];
    for( i=0; i<20; i++ ){
        total_marks[i] = ft_marks[i]/4.0 + st_marks[i]/4.0+ final_marks[i]/2.0;}
        for ( i=1; i<=20; i++ ){
            printf("Roll no: %d \t total marks: %0.01lf \n", i, total_marks[i-1] );
        }
        return 0;
    }
