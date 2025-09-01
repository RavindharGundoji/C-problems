#include<stdio.h>


  void reverse(int arr[], int n)
  {
   int i=0 , j= n-1,temp;
   
   while(i<j)
   {
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    
    i++;
    j--;
   }
  }


int main()
{ 
 int arr[100],n,i;
 
 printf("Enter size of the array : ");
 scanf("%d",&n);
 
 printf("enter the elements of the array : ");
 
 for(i=0;i<n;i++)
 {
   scanf("%d",&arr[i]);
 }
 
 reverse(arr,n);
 
 printf("Reversed array : ");
 for(i=0 ; i<n ; i++)
 {
   printf("%d ", arr[i]);
 }
 
 
}
