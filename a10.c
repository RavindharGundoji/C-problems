#include<stdio.h>
int main()
{
   int i,n,k=0,l=0;
   int min,max,arr[100],even[100],odd[100];
   
   printf("enter array size n :");
   scanf("%d",&n);
   
   for (i=0;i<n;i++)
   {
   scanf("%d",&arr[i]);
   }
   
   for(i=1;i<n;i++)
   {
    if(arr[i] %2 == 0){
           even[k]=arr[i];
           k++;
           }
     else{
          odd[l] = arr[i];
          l++;
          }
   }
   printf("even array is :\n");
  for(i=0;i<k;i++)
  {
    printf("%d ",even[i]);
  }
  
   printf("even array is :");
  for(i=0;i<l;i++)
  {
    printf("%d ",odd[i]);
  }
 return 0;  
}   
