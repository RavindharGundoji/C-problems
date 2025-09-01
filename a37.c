#include<stdio.h>
void sq(int arr[],int n);
int main()
{
 int arr[] = {1,2,3,4},d;
 int n=4;
  sq(arr , 4);
 
 printf("squared array is : \n");
 for(int i =0; i<n;i++)
 {
  printf("%d ",arr[i]);
 }
}

void sq(int arr[],int n)
{
  int d;
  for(int i=0; i<n ; i++){
   arr[i] = arr[i] * arr[i];
  }
}
