// sum of all elements in an array 
#include<stdio.h>
int main()
{
 int i,j,sum,n;
 
  printf("enter array size :");
  scanf("%d",&n);
  
 int arr[n];
  printf("enter %d array elements :\n",n);
  for(i=0;i<n;i++)
  {
   scanf("%d",&arr[i]);
  }
  
  for(i=0;i<n;i++)
  {
   sum += arr[i];
  }
  
  

  printf( "sum of all elements in an array is :  %d ",sum);
  
 return 0;
}

