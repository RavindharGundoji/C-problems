// max and min elements in an array
#include<stdio.h>
int main()
{
   int i,n;
   int min,max,arr[100];
   
   printf("enter array size n :");
   scanf("%d",&n);
   
   for (i=0;i<n;i++)
   {
   scanf("%d",&arr[i]);
   }
   min=max=arr[0];
   
   for(i=0;i<n;i++)
   {
    if(arr[i]<min)
          min = arr[i];
    else if (arr[i] >max)
          max = arr[i];
        
   }
   
   printf("the max elements in an array are : %d\n",max);
 printf("the min elements in an array are : %d\n",min);
}
