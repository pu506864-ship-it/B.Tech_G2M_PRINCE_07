#include<stdio.h>
int main()
{
    int a=1,i,n;
    printf("enter a number to find factorial(!)");
    scanf("%d",&n);
    for ( i=1; i<=n;i++)

    {
       a=a*i;
    }
    printf("%d!=%d",n,a);



}