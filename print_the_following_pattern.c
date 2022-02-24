#include<stdio.h>
int main()
{int k,l;
scanf("%d",&k);
l=k+64;
    char i,j;
    for(i=l;i>=65;i--)
    {
        for(j=65;j<=i;j++)
        printf("%c ",i);
        printf("
");
    }
}