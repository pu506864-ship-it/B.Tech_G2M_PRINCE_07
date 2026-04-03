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
    {if(i==j&&a[i][j]==1)
        {count++;}
    
    if(i!=j&&a[i][j]!=0)
        {c++;
     }
        

    }}
    if(count==n&&c==0){
    printf("given matrix is an identity matrix");}
if(c!=0){
printf("given matrix is not an identity matrix");
    }
    
    return 0;
    }
