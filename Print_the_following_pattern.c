#include<stdio.h>
int main()
{
    int i,n,j,k,l;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       for(j=1;j<=n;j++)
       {
           if(j==i||j==n+1-i)
           printf("%d ",n+1-i);
           else
printf(" ");
       }printf("
");
    }
}