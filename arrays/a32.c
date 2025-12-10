#include<stdio.h>

int main()
{
 int a[10],n,i,sum;
 float avg;
 
 printf("enter size of the array");
 scanf("%d",&n);
 
 printf("enter array elements ");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
}
printf("\n");
  
  for(i=0;i<n;i++)
  { 
   sum += a[i];
  }
  
  avg = sum/n;
  printf("\n sum =%d",sum);
  printf("\n average = %.2f",avg);
}
