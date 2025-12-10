// sub of matrices 
#include<stdio.h>
int main()
{
   int i,j,n;
   int arr1[10][10],arr2[10][10],arr3[10][10];
   
   printf("enter array size (n x n) :");
   scanf("%d",&n);
   printf("enter 9 elements of an array :\n");
   for (i=0;i<n;i++)
   {
       for(j=0;j<n;j++){
                   scanf("%d",&arr1[i][j]);
                   }
   }
   
   
   printf("enter 9 elements of an array :\n");
   for (i=0;i<n;i++)
   {
       for(j=0;j<n;j++){
                   scanf("%d",&arr2[i][j]);
                   }
   }
   
   for (i=0;i<n;i++)
   {
       for(j=0;j<n;j++){
                  arr3[i][j] = arr1[i][j] * arr2[i][j];
                   }
   }
   
   printf("entered matrix is : \n");
   for (i=0;i<n;i++)
   {
       for(j=0;j<n;j++){
                   printf("%d ",arr3[i][j]);
                   }
                   printf("\n");
   }
}   
