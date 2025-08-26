
#include<stdio.h>
int main()
{ 
 int start ,end,i,sum=0;
 printf("Enter the first number : ");
 scanf("%d",&start);
 printf("Enter the second number : ");
 scanf("%d",&end);
 
 for(i=start;i<=end;i++){
    if(i%2 !=0)
    {
       sum+=i;
     }
 }
 
 printf("sum of even numbers bw %d and %d is: %d\n",start,end,sum);
 return 0;      
}
