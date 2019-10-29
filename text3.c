#include<stdio.h>
int main (void)
{
    int a,b ,c,d,e;
    printf("Enter a:\n ");
    scanf("%d",&a);
    printf("Enter b:\n ");
    scanf("%d",&b);
    printf("Enter c:\n ");
    scanf("%d",&c);
    printf("Enter d:\n ");
    scanf("%d",&d);

float f;
e=a+b+c+d;
f=e/4.0;
printf("e is %d, f is %.1f\n");
return 0;
}