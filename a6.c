// unique elements in an array
#include<stdio.h>
int main()
{
 int i,j,D,n;
 
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
  D=1;
   for(j=0;j<n;j++){
   if( i !=j && arr1[i] == arr1[j]){
       D=0;
       break;
       }
     }
     if(D == 1)
     printf("unique elements are : %d",arr1[i]);
  }
  
 return 0;
}

