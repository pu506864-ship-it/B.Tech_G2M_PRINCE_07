   #include<stdio.h>
int main(){
int a[100][100],n,m,i,j,s[10],row,max;
s[0]=0;

    printf("enter size   of matrix n×m::");
    scanf("%d%d",&n,&m);
     
    printf("enter elements of array:;\n");
    for(i=0;i<n;i++)
    { for(j=0;j<m;j++)
    {printf("enter a[%d][%d]",i,j);
    scanf("%d",&a[i][j]);}}
    
    for(i=0;i<n;i++)
    {for(j=0;j<n;j++)
    {s[i]=s[i]+a[i][j];
           }
        
    }
   for(i=1;i<n;i++){
       max=s[0];
       row=0;
       if(max<s[i]){
           max=s[i];
           row=i;
       }
   }
    printf("largest row in matrix is=%d\nwhose sum is %d ",row+1,max);
return 0;
}
