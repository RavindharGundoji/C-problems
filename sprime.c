// sum of all prime numbers bw a nd b
#include<stdio.h>
int main()
{
int a,b,i,j,sum=0;
  printf("enter first and last numbers :");
  scanf("%d %d",&a,&b);
  
  for(i=a;i<=b;i++){
     
     for(j=2;j<i;j++)
     {
       if (i%j ==0)
           break;
     }
     
     if(i==j)
        sum += i;
  }

     printf("sum of all prime numbers bw %d and %d   =   %d\n",a,b,sum);
}
