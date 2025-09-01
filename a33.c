#include<stdio.h>

int main()
{
 int arr[10],n,i;
 
 printf("enter size of the array");
 scanf("%d",&n);
 
 printf("enter array elements ");
 for(i=0;i<n;i++)
 {
  scanf("%d",&arr[i]);
}
printf("\n");


 printf("\n even numbers are :");
 for(i=0;i<n;i++)
 {
 if(arr[i] % 2 == 0)
     printf("%d ",arr[i]);
}
printf("\n");

 printf("\n odd numbers are :");
 for(i=0;i<n;i++)
 {
 if(arr[i] % 2 != 0)
     printf("%d ",arr[i]);
}
printf("\n");
}
