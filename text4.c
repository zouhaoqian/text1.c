#include<stdio.h>
int main(void)
{
float x, y ;
printf("Enter x(x>=0):\n");
scanf("%f",&x);
if (x<=50)
{
  y=0.53*x;  
}else
{y=0.53*50+(x-50)*0.05;
}
printf("y is %f\n",y);
return 0;
}