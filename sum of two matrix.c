#include<stdio.h>
int main(){
int a[100][100],b[100][100],c[100][100],m,i=0,j=0,n;
    printf("enter size   of matrix n×m::");
    scanf("%d%d",&n,&m);
    printf("enter elements of array:;\n");
    for(i=0;i<n;i++)
    { for(j=0;j<m;j++)
    {
        printf("a[%d][%d]::",i,j);
        scanf("%d",&a[i][j]);}
    }
    printf("enter elements of second matrix::\n");
     for(i=0;i<n;i++)
    { for(j=0;j<m;j++)
    {
        printf("b[%d][%d]::",i,j);
        scanf("%d",&b[i][j]);}
    }
     for(i=0;i<n;i++)
    { for(j=0;j<m;j++)
    {c[i][j]=a[i][j] +b[i][j];
    printf("\n\na+b[%d][%d]=%d\t",i,j,c[i][j]);
    }   
    }
    
return 0;
}
