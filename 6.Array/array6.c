#include <stdio.h>
int main()
{
    int marks, i, count;
    int total_marks [] = { 83,86,97,95,93,95,86,52,49,41,42,47,90,59,63,86,40,46,92,56,87,64,91,43,89,66,58,73,99,81,100,64,55,69,85,81,67,88,71 };
    for ( marks=50; marks<=100; marks++ ){
        count = 0;
        for ( i=0; i<40; i++ ){
            if ( total_marks[i] == marks ){
                count++;
            }
        }
        printf ("Marks : %d , count %d \n", marks, count);
    }
        return 0;
    }
