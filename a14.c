// second largest 
#include<stdio.h>
int main()
{
   int i,j,n,max1,max2;
   int a[100];
   
   printf("enter array size n :");
   scanf("%d",&n);
   printf("enter %d elements of an array :",n);
   for (i=0;i<n;i++)
   {
   scanf("%d",&a[i]);
   }
   
   if(a[0] > a[1]){
    max1 = a[0];
    max2 = a[1];
   }
  else{
    max2 = a[0];
    max1 = a[1];
    }
    
    for(i=2;i<n;i++){
      if(a[i] > max1)
       {
        max2 = max1;
        max1 = a[i];
       }
       else if(a[i] > max2)
       { 
        max2 = a[i];
       }
    }
    
    printf("the second largest element in the array is : %d \n",max2);
  }
