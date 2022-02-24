#include<stdio.h>
int main()
{float y;
    long int x;
    scanf("%ld",&x);
    y=x*0.0000000001;
    if(y<1&&y>0.1)
    printf("Valid");
    else
    printf("Invalid");
    return 0;
}