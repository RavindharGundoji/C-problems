// 62.c program to search for an element in an array using linear search 
#include<stdio.h>
int main()
{ 
 int n,i,j,key;
 int arr[n];
 printf("enter the size of an array :");
 scanf("%d",&n);
 
 printf("enter %d elements of the array :",n);
 
 for(i=0;i<=n;i++){
     scanf("%d",&arr[i]);
     
  }
  
  
  printf("enter the key element :  \n");
  scanf("%d",&key);
  
  for(i=0;i<=n;i++)
  { 
   if(arr[i]==key)
     {
       printf("key found %d in the array at position %d\n",key,i);
       return 0;
     }
  }
  
  printf("key %d is not found in the array \n",key);
  return 0;       
}
