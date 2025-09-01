// print upper triangle of a matrix 
#include<stdio.h>
int main()
{
 int i,j;
 int arr[3][3], rowsum , colsum;
 
 printf("enter elements of the matrix : \n");
 for (i=0;i<3;i++)
 {
   for(j=0;j<3;j++)
   {
    scanf("%d", &arr[i][j]);
   }
   printf("\n");
 }
 
 for (i=0;i<3;i++)
 {
   for(j=0;j<3;j++)
   {
    if(j>=i)
    {
     printf("%d ",arr[i][j]);
    }
   }
   printf("\n");
 }
} 
