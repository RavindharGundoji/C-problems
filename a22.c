// sum of left diagonal elements 
#include<stdio.h>
int main()
{
 int i,j;
 int sum=0, arr[3][3];
 
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
    if(i+j ==2)
    {
     sum += arr[i][j];
    }
   }
 }
 printf("sum of diagonal elements is : %d \n",sum);
 
 return 0;
 }
