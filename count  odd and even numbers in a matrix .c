#include<stdio.h>
int main(){
int a[100][100],n,m,d1=0,d2=0,i=0,j,count=0,c=0;
    printf("enter size   of matrix n×m::");
    scanf("%d%d",&n,&m);
     
    printf("enter elements of array:;\n");
    for(i=0;i<n;i++)
    { for(j=0;j<m;j++)
    {printf("enter a[%d][%d]",i,j);
    scanf("%d",&a[i][j]);}}
    for(i=0;i<n;i++)
    {for(j=0;j<n;j++)
    {if(a[i][j]%2==0)
        {count++;}
    
    if(a[i][j]%2!=0)
        {c++;
     }
        

    }}
   
    printf("total even numbers in matrix is=%d\n",count);
    printf("total 0dd numbers in matrix is=%d",c);
    
    
    return 0;
    }
