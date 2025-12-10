// descending order of elements 
#include<stdio.h>
int main()
{
   int i,j,n,temp;
   int arr[100];
   
   printf("enter array size n :");
   scanf("%d",&n);
   printf("enter %d elements of an array :",n);
   for (i=0;i<n;i++)
   {
   scanf("%d",&arr[i]);
   }
   
   for(i=0;i<n;i++)
   {
     for(j=i+1;j<n;j++){
     if(arr[i] < arr[j]){
         temp = arr[i];
         arr[i] = arr[j];
         arr[j] = temp;
     }
   }
   }
    printf("ascending order of given array = \n");
   for(i=0;i<n;i++)
   {
    printf("%d ",arr[i]);
   }
   return 0;
}   

   
