#include<stdio.h>
int main(void)
{
float t ,l,y;
printf("Enter t,l(t>=0,l>=0:\n");
scanf("%f%f",&t,&l);
if(l<=3)
{y=10+(t/5)*2;
}else
{
    if(l<=10)
{y=10+(l-3)*2+(t/5)*2;}
else{y=10 +(10-3)*2+(l-10)*3+(t/5)*2;}
}
printf("y is %.0f\n",y);
return 0;


}