#include<stdio.h>
int main()
{
    int i,j,k,l;
    scanf("%d",&i);
    for(j=1;j<=i;j++)
    {
        for(k=1;k<=i;k++)
        {
            if(k==j||k==i+1-j)
            printf("x");
            else
            printf("0");
        }printf("
");
    }
}