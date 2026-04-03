#include<stdio.h>
int main(){
int a[100][100],n,m,sum_r=0,sum_c=0,i=0,j;
    printf("enter size   of matrix n×m::");
    scanf("%d%d",&n,&m);
     
    printf("enter elements of array:;\n");
    for(i=0;i<n;i++)
    { for(j=0;j<m;j++)
    {printf("enter a[%d][%d]",i,j);
    scanf("%d",&a[i][j]);}}
    for(i=0;i<n;i++)
    {for(j=0;j<n;j++)
    {sum_r=sum_r+a[i][j];}
    printf("sum of %d row=%d\n",i+1,sum_r);
    sum_r=0;
    }
    for(j=0;j<n;j++)
    {for(i=0;i<n;i++)
    {sum_c=sum_c+a[i][j];}
    printf("sum of %d column=%d\n",j+1,sum_c);
    sum_c=0;
    }
    return 0;
    }
        
