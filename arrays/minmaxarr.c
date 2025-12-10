/* program to find max and min values in an array */
#include<stdio.h>
int main()
{
  int i;
  int arr[10]= {2,5,4,1,8,9,11,6,3,7};
  int small,large;
  
   small = large = arr[0];
   for(i=1;i<10;i++)
     {
      if (arr[i]<small)
         small = arr[i]; // min value
      if (arr[i]>large)
         large = arr[i]; // max value
     }
     printf ("min value in array is %d\n",small);
     printf ("max value in array is %d\n",large);
     
     return 0;
}
