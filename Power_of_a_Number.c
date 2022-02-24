#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,m,i,j;
    scanf("%d%d%d",&x,&y,&m);
    i=pow(x,y);
    j=i%m;
    printf("%d",j);
}