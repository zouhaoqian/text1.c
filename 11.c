#include<stdio.h>
int main(void)
{
int n,i;
double sum=0,term=1;
printf("Enter n:\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    term=term/i;
sum+=term;
}
sum+=1;
printf("sum is %.51f\n",sum);
return 0;
}  
