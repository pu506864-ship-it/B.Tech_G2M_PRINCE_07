#include<stdio.h>

int main()
{
    int a,n,i;
    printf("enter a number to find sum of N natural number->");
    scanf("%d",&n);
    a=0;
    for(i=0;i<=n;i++)
    {a=a+i;
        
    }
    printf("sum upto %d is %d ",n,a);
}