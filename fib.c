#include<stdio.h>
#include<limitS.h>
int main()
{
    int i,j,n1,n2;
    printf("enter number of rows and coloumns ");
    scanf("%d %d",&n1,&n2);
for(i=1;i<=n1;i++)
{
    for(j=1;j<=i;j++)
    {
        printf("* ");
    }
    printf("\n");
}
}
