#include<stdio.h>
int main(){
int a[100][100],n,m,d1=0,d2=0,i=0,j;
char str;
    do{printf("enter size   of matrix n×m::");
    scanf("%d%d",&n,&m);
     
    printf("enter elements of array:;\n");
    for(i=0;i<n;i++)
    { for(j=0;j<m;j++)
    {printf("enter a[%d][%d]",i,j);
    scanf("%d",&a[i][j]);}}
    for(i=0;i<n;i++)
    {for(j=0;j<n;j++)
    {if(i==j){
        d1=d1+a[i][j];}
        if((i+j)==(n-1)){
        d2=d2+a[i][j];}}}
        
    printf("sum of 1st diagonal=%d\nsum of 2nd diagonal=%d\n",d1,d2);
    printf("if you want to re calculate enter y otherwise enter n");
        scanf("%s",&str);
    }while(str=='y');
    
    
    return 0;
    }
    
