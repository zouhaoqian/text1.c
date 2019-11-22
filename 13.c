#include <stdio.h>
int main(void)
{
int i ,m,term,sum;

for(i=100;i<=999;i++)
{
m=i;
while(m>0)
{
term=m%10;
sum+=term*term*term;
m=m/10;

}
if(i==sum)
{printf("%d\n",i);}
sum=0;
}

printf("/n");
return 0;


}