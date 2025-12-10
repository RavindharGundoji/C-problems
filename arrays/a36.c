#include<stdio.h>
long long  ep(int arr[] , int n);
int main()
{
 int arr[] = {1,2,3,4};
 long long  product = ep(arr,4);
 printf("product : %lld \n",product);
 return 0;
}
long long  ep(int arr[] , int n)
{
  long long  product =1;
  for(int i = 0; i< n ; i++)
     product *= arr[i];
     return product;
}
