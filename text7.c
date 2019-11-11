# include <stdio.h>
int main (void)
{
float x;
printf("Enter x:\n");
scanf("%d",&x);
if(x>=0)
{x=x;}
else{x=-x;}
printf("x is %d\n",x);
return 0;
}
