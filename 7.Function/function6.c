#include <stdio.h>
float circle_area (  int radius )
{
    float area = 3.1416 *  (radius * radius );
    return area;
}
int main ()
{
    int r;
    float area;
    printf("Enter the radius: \n");
    scanf("%d", &r);
    area = circle_area ( r );
    printf("Area of this circle is: %0.2f \n", area);
    return 0;
}
