#include<stdio.h>
int main(){
int a[100][100],n,m,i,j,large=a[0][0];
    printf("enter size   of matrix n×m::");
    scanf("%d%d",&n,&m);
     
    printf("enter elements of array:;\n");
    for(i=0;i<n;i++)
    { for(j=0;j<m;j++)
    {printf("enter a[%d][%d]",i,j);
    scanf("%d",&a[i][j]);}}
    
    for(i=0;i<n;i++)
    {for(j=0;j<n;j++)
    {if(large<a[i][j]){
        large=a[i][j];}
           }
        
    }
   
    printf("largest number in matrix is=%d\n ",large);
    return 0;
    }f
