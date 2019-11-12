#include<stdio.h>
int main(void)
{
int i ,n=0,sum=0;
printf("Enter n:\n");
scanf("%d",n);
for(  i=1; i<=n ;i++  ){
sum=sum+i;

}
printf("sum=%d\n",sum);
return 0;
}