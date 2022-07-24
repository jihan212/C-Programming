#include <stdio.h>
void main()
{
    int i,a[10];
    printf ("enter array value:");
    for(i=0;i<10;i++)
{
    scanf("%d",&a[i]);
}
int max=a[0];
int min=a[0];
for(i=1;i<10;i++)
{
    if(max<a[i])
    max=a[i];
    else
    if(min>a[i])
    min=a[i];
}
printf ("max=%d",max);
printf ("\nmin=%d",min);
    
}