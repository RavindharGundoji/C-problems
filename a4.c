// copy elements of an array into another array 
#include<stdio.h>
int main()
{
 int i,j,n;
 
  printf("enter array size :");
  scanf("%d",&n);
  
 int arr1[n];
 int arr2[100];
  printf("enter %d array elements :\n",n);
  for(i=0;i<n;i++)
  {
   scanf("%d",&arr1[i]);
  }
  
  for(i=0;i<n;i++)
  {
   arr2[i] =  arr1[i];
  }
  
  
  printf( "elements stored in Array 2  are :\n");
  for(i=0;i<n;i++)
  {
   printf("%d\n",arr2[i]);
  }
  
 return 0;
}

