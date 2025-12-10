// unique elements in an array
#include<stdio.h>
int main()
{
 int i,j,n;
 int k=0;
  printf("enter array size :");
  scanf("%d",&n);
  
 int arr1[n] , arr2[n] ,arr3[2*n];
  printf("enter %d array 1 elements :\n",n);
  for(i=0;i<n;i++)
  {
   scanf("%d",&arr1[i]);
  }
  
    printf("enter %d array 2 elements :\n",n);
  for(i=0;i<n;i++)
  {
   scanf("%d",&arr2[i]);
  }
  
  for(i=0;i<n;i++)
  {
   arr3[k++] = arr1[i];
  }
  
   for(j=0;j<n;j++)
  {
   arr3[k++] = arr2[j];
  }
  
  printf("elements of array 3 are :");
   for(i=0;i<2*n ;i++){
           printf("%d ",arr3[i]);
   }
   int temp;
    for(i=0;i<2*n -1;i++){
       for(j=i+1;j<2*n;j++){
        if(arr3[i] < arr3[j])
           {
            temp = arr3[i];
            arr3[i] = arr3 [j];
            arr3[j] = temp;
           }
       }
    }
  printf("arr3 in descending order : \n");
  for(i=0;i<2*n;i++)
  {
   printf("%d ",arr3[i]);
  }
    
 return 0;
}

