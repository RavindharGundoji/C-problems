// sum of rows and cols
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
   rowsum =0,colsum = 0;
   for(j=0;j<3;j++)
   {
    rowsum += arr[i][j];
    colsum += arr[j][i];
   }
    printf("sum of rows is %d = %d\n",i+1,rowsum);
 printf("sum of cols is %d = %d\n",i+1,colsum);
 }

 }
