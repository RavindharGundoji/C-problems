// detrerminant  of a matrix 
#include<stdio.h>
int main()
{
 int i,j;
 int arr[3][3], rowsum , colsum,det;
 
 printf("enter elements of the matrix : \n");
 for (i=0;i<3;i++)
 {
   for(j=0;j<3;j++)
   {
    scanf("%d", &arr[i][j]);
   }
   printf("\n");
 }
 
 det =  arr[0][0] * (arr[1][1]*arr[2][2] - arr[2][1]*arr[1][2]) - arr[0][1] * (arr[1][0]*arr[2][2] - arr[2][0]*arr[1][2]) + arr[0][2] * (arr[1][0]*arr[2][1] - arr[2][0]*arr[1][1]);
 
 printf("detreminant of matrix is : %d  ",det);
} 
