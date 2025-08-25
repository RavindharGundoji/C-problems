#include<stdio.h>
int main()
{ 
int i,j,n,sum;
int mata[20][20],matb[20][20],matc[20][20];
 printf("enter size of mat (nxn):");
 scanf("%d",&n);
 printf("enter elements of an mat a :\n");
 for (i=0;i<n;i++){
   for(j=0;j<n;j++)
 {
  scanf("%d",&mata[i][j]);
  
 }
 }
 
 printf("enter elements of an mat b :\n");
 for (i=0;i<n;i++){
   for(j=0;j<n;j++)
 {
  scanf("%d",&matb[i][j]);
  
 }
 }
 for(i=0;i<n;i++)
 
 {
    for(j=0;j<n;j++)
    {
      matc[i][j]=  mata[i][j] +  matb[i][j];
      if(matc[i][j]==0)
           printf("0\t");
      else
          printf("%d\t",matc[i][j]);
    }
    printf("\n");
 }
return 0;
}
