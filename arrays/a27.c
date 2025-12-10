// detrerminant  of a matrix 
#include<stdio.h>
int main()
{
 int i,j,n;
 
 printf("enter array size n : ");
 scanf ("%d",&n);
 
 int arr1[n][n],arr2[n][n],flag=1;
 printf("enter elements of the arr1 : \n");
 for (i=0;i<n;i++)
 {
   for(j=0;j<n;j++)
   {
    scanf("%d", &arr1[i][j]);
   }
   printf("\n");
 }
 printf("enter elements of the arr2 : \n");
 for (i=0;i<n;i++)
 {
   for(j=0;j<n;j++)
   {
    scanf("%d", &arr2[i][j]);
   }
   printf("\n");
 }


for (i=0;i<n;i++)
 {
   for(j=0;j<n;j++)
   {
    if(arr1[i][j] != arr2[i][j]){
      flag =0;
      break;
      }
   }
   if(flag == 0)
       break;
 }
 
 if(flag == 1)
  printf(" both are equal ");
 else 
   printf("both are not equal");
 return 0;
} 
