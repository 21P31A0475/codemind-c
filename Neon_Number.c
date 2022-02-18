#include<stdio.h>
int main() 
{ 
    int n,temp,sq,sum=0; 
    scanf("%d",&n); 
    sq=n*n; 
    while(sq>0) 
    { 
        temp=sq%10; 
        sum=sum+temp; 
        sq=sq/10; 
        
    } 
    if(sum==n) 
    printf("Neon Number"); 
    else 
    printf("Not Neon Number "); 
    
}