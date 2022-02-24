#include<stdio.h>
int main()
{
    int a,b,c=0,d=1;
    scanf("%d",&a);
    while(a>0)
    {
        b=a%10;
        a=a/10;
        c=c+b;
        d=d*b;
    }if(c-d>=0)
    printf("%d",c-d);
    else
printf("%d",d-c);
}