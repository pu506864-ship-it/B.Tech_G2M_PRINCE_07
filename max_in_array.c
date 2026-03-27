#include<stdio.h>
int main(){
int a[100],max,i,n;
    printf("enter size   of array::");
    scanf("%d",&n);
    printf("enter elements of array:;");
    for(i=0;i<(n);i++)
    {scanf("%d",&a[i]);}
    for(i=0;i<n;i++)
    {if(a[i]>a[i+1]){
    max=a[i];
    a[i+1]=max;}
    else{
        max=a[i+1];
    }
    }
    printf("max=%d",max);
return 0;
}
