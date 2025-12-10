// count of duplicates in an array
#include<stdio.h>
int main()
{
 int i,j,count=0,n;
 
  printf("enter array size :");
  scanf("%d",&n);
  
 int arr1[n];
  printf("enter %d array elements :\n",n);
  for(i=0;i<n;i++)
  {
   scanf("%d",&arr1[i]);
  }
  
  for(i=0;i<n;i++)
  {
   for(j=0;j<n;j++){
   if(arr1[i] == arr1[j]){
     count++;
     break;
     }
     }
  }
  printf( "count of duplicate elements in an array are =  %d:\n",count);
  
 return 0;
}

