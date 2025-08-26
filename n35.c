 // sum of first n natural numbers which are not divisible by 3 , 5
#include<stdio.h>
int main()
{ 
 int i,n,sum=0;
 
 printf("enter a number :");
 scanf("%d",&n);
 
 
 for(i=1;i<=n;i++)
 {
  if(i%3 == 0 || i%5 == 0)
     continue;
     
     sum+=i;
 
 }
 
 
 printf("sum of %d natural numbers which are not divisible by 3 or 5 Is %d",n,sum);
 return 0;      
}
