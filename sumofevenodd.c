#include<stdio.h>
int main()
{
int a=0,b=0,i,n;
printf("enter a number-->");
scanf("%d",&n);
for ( i=0;i<=n;i++)
{
    if(i%2==0)
    {a=a+i;}
    else
    b=b+i;

}

printf("sum of even=%d   odd=%d",a,b);
return 0;
}