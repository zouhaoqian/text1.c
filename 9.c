#include<stdio.h>
int main (void)
{
int choice,i;
float price;
for (i=1;i<=5;i++)
{
printf("[1]select apples\n");
printf("[2]select pears \n");
printf("[3]select oranges\n");
printf("[4]select grapes\n");

printf("Enter choice:/n");
scanf("%d",&choice);
if(choice==0)
 break;
switch (choice){
    case 1:price=3.00;break;
    case 2:price=2.50;break;
    case 3:price=4.10;break;
    case 4:price=10.20;break;
    default:price=0.00;break;
}
printf("price is %0.1f\n",price);
printf("Thanks\n");

return 0;}
}