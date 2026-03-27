#include<stdio.h>
int main(){
int a[100],sum=0,avg,i,n;
    printf("enter size   of array::");
    scanf("%d",&n);
    printf("enter elements of array:;");
    for(i=0;i<(n);i++)
    {scanf("%d",&a[i]);}
    for(i=0;i<n;i++)
    {sum=sum+a[i];
     }
    avg=sum/(n);
    printf("sum of array elements=%d\taverage of array elements=%d",sum,avg);
return 0;
}