#include<stdio.h>
int main(){
int a[100],o=0,e=0,i,n;
    printf("enter size   of array::");
    scanf("%d",&n);
    printf("enter elements of array:;");
    for(i=0;i<(n);i++)
    {scanf("%d",&a[i]);}
    for(i=0;i<n;i++)
    {if(a[i]%2==0)
   { e++;
     }
     else{
         o++;
     }
    }
    printf("odd numbers in array=%d\teven numbers in array=%d",o,e);
return 0;
}