#include<stdio.h>
int main()
{
    int i,k,j;
    scanf("%d",&k);
    for(i=k;i>=1;i--)
    {
        
        for(j=1;j<=i;j++)
        printf("%d",j);
        printf("
");
    }
}