#include<stdio.h>
int main()
{
    int i,j,k,l;
    scanf("%d",&k);
    for(i=1;i<=k;i++)
    {
        for(j=1;j<=k;j++)
        {
            if(i==j)
            printf("0");
            else
printf("x");
        }
        printf("
");
    }
    
}