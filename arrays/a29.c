// repeating elements in an array
#include<stdio.h>
int main()
{
  int arr[] = {4,2,4,5,2,3,1};
  int n = sizeof(arr) / sizeof(arr[0]);
  int freq[100] = {0};
  int i;
  
  printf("Repeating elements are :");
  for(i = 0; i<n;i++)
  {
    freq[arr[i]]++;
    if(freq[arr[i]] == 2)
    { 
     printf("%d ",arr[i]);
    }
  }
}
