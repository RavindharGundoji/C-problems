#include<stdio.h>
int main()
{ 
int i,j,n,found;
printf("enter the value of n  :");
scanf("%d",&n);
int arr[n-1];
printf("enter %d elements from 1 to %d (with one missing):\n",n-1,n);
for(i=0;i<n;i++)
    {
     scanf("%d",&arr[i]);
    }

 for (i=0;i<=n;i++)
 {
  found =0;
  for(j=0;j<n-1;j++){
   if (arr[j] == i){
     found =1;
     break;
   }
  }
  
  if(!found)
  { 
   printf("Missing number is: %d\n",i);
  }
 }

return 0;
}
