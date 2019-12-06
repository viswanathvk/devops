#include<stdio.h>
void main()
{
    int i,sum;
    int a[100],j=0;
    printf("enter a number ::");
    scanf("%d",&i);
    while(i>0)
    {
       int r;
       r=i%10;
       printf("%d \n",r);

       i=i/10;
    }
}s
