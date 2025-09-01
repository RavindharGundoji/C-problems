// transpose of a matrix 
#include<stdio.h>
#define r 4
#define c 3

int main()
{
 int i,j;
 int mat[100][100],t[100][100];
 
 printf("enter elements of the matrix : \n");
 for (i=0;i<r;i++)
 {
   for(j=0;j<c;j++)
   {
    scanf("%d", &mat[i][j]);
   }
   printf("\n");
 }
 
 
for (i=0;i<r;i++)
 {
   for(j=0;j<c;j++)
   {
     t[i][j]= mat[j][i];
   }
 }
 
  printf("transpose of a matrix is : \n");
 for (i=0;i<r;i++)
 {
   for(j=0;j<c;j++)
   {
    printf("%d ",t[i][j]);
   }
   printf("\n");
 }
 
}
