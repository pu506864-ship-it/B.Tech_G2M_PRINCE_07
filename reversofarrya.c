#include<stdio.h>
int main()
{int a[100],b[100],i,n;
    printf("enter size   of array::");
    scanf("%d",&n);
    printf("enter elements of array:;");
    for(i=0;i<(n);i++)
    {scanf("%d",&a[i]);}
     for(i=0;i<n;i++)
    {b[i]=a[n-1-i];}
     for(i=0;i<n;i++)
     {printf("%d\t",b[i]);}
return 0;
}