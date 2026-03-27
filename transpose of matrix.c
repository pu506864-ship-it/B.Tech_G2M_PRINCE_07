#include<stdio.h>
int main(){
int a[100][100],b[100][100],m,i=0,j=0,n;
    printf("enter size   of matrix n×m::");
    scanf("%d%d",&n,&m);
     
    printf("enter elements of array:;\n");
    for(i=0;i<n;i++)
    { for(j=0;j<m;j++)
    {
        printf("a[%d][%d]::",i,j);
        scanf("%d",&a[i][j]);}
    }
   printf("trnspose of givan matrix\n");
     for(i=0;i<n;i++)
    { for(j=0;j<m;j++)
    {b[i][j]=a[j][i];
    printf("\n\na[%d][%d]=%d\t",i,j,b[i][j]);
    }   
    }
    
return 0;
