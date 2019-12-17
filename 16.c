#include<stdio.h>
void sort(int x[],int n);
#define LEN 5

int main(void)
{
int a[LEN],i;
printf("Enter a array :\n");
for(i=0;i<LEN;i++)
{
    scanf("%d",&a[i]);

}
sort(a ,LEN);
for(i=0;i<LEN;i++)
{
    printf("%5d",a[i]);
}
    return 0;
}

void sort(int x[],int n)
{
    int i,j,k,temp;
   
    for(i=0;i<n-1;i++)
    {
        k=i;
       for(j=i+1;j<n;j++)
        {
         if(x[k]<x[j])
         {
             k=j;
         }
        
        }
       temp=x[i];
       x[i]=x[k];
       x[k]=temp;





    }



}
