#include<stdio.h>
int main(void)
{
int n,i;
double sum=0,term=1;
i=1;
while(term>=1e-5)
{
    term=term/i;
sum+=term;
i++;
}
sum+=1;
printf("sum is %.51f\n",sum);
return 0;
}  
