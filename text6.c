#include<stdio.h>
int main (void)
{
    float n;
    printf("Enter n:\n");
    scanf("%f",&n);
    if(n<0||n>100)
    {printf("illegal n\n");}
if (n<60)
{printf("E\n");}
else if (n<70)
{printf("D\n");}
else if(n<80)
{printf("C\n");}
else if(n<90)
{printf("B\n");}
else 
{printf("A\n");}
return 0;
}