#include<stdio.h>
int main()
{ float i, sum=0,n;
    printf("enter term ");
scanf("%f",&n);
for(i=1;i<=n;i++)
{sum=sum+1/i;}
printf("sum of series 1+1/2+...1/%.00f = %f",n,sum);
return 0;
}