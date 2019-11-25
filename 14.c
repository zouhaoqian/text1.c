#include<stdio.h>
int main(void)
{
int i,x,y,z;
for(i=100;i<=999;i++)
{x=i%10;
y=i/10%10;
z=i/100;
if(i==x*x*x+y*y*y+z*z*z)
{printf("%d\n",i);}
}
printf("\n");
return 0;
}
