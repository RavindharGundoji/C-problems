/* program to find even and odd no's in an array */
#include<stdio.h>
int main()
{
 int i;
 int arr[5] = {1,2,3,4,5};
 int even=0,odd=0;
  for(i=0;i<5;i++)
  {
   if(arr[i] % 2 == 0)
          even++;
    else
       odd++;
  }
  printf("even numbers: %d\n",even);
   printf("odd numbers: %d\n",odd);
   
  return 0;
}
