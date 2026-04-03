#include<stdio.h>
int main(){
int a[100][100],n,m,i,j,count=0,given_no;
    printf("enter size   of matrix n×m::");
    scanf("%d%d",&n,&m);
     
    printf("enter elements of array:;\n");
    for(i=0;i<n;i++)
    { for(j=0;j<m;j++)
    {printf("enter a[%d][%d]",i,j);
    scanf("%d",&a[i][j]);}}
    printf("enter a number to find its frequency:::");
    scanf("%d",&given_no);
    for(i=0;i<n;i++)
    {for(j=0;j<n;j++)
    {if(a[i][j]==given_no){
        count++;
    }
        

    }}
   
    printf("frequency of given number in matrix is=%d\n",count);
    
    
    
    return 0;
    }
