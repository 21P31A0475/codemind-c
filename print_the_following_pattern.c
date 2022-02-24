#include<stdio.h>
int main()
{
    int i,j,k,n,l;
    scanf("%d",&n);
    k=64+n;
    for(i=65;i<=k;i++)
    {
        for(j=1;j<=n;j++)
        printf("%c ",i);
        printf("
");
    }
}