#include<stdio.h>
int main()
{
    int i,n,j,k=0,l;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    { 
        if((n%i==0||i==1)&&(i==1||i%2==0||i%3==0||i%5==0||i%7==0)&&(i==1||i!=2&&i!=3&&i!=5&&i!=7))
        k++;
    }printf("%d",k);
}