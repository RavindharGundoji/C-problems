//  removing element from an array 
#include<stdio.h>
int main()
{
   int i,j,n,pos;
   int a[100];
   
   printf("enter array size n :");
   scanf("%d",&n);
   printf("enter %d elements of an array :",n);
   for (i=0;i<n;i++)
   {
   scanf("%d",&a[i]);
   }
   
   printf("enter the position :\n");
   scanf("%d",&pos);
   
   n--; // array size decreased 
   
   for(i=pos;i<=n;i++)  // deleting and storing the next indexed  element into the current index
   {
    a[i-1] = a[i];
   }
   
   printf(" array elements after deleting the element is :\n");
   for(i=0;i<n;i++)
   {
    printf("%d ",a[i] );
   }
}   
