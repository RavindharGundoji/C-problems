// given num is a perfect square or not
#include<stdio.h>
int main()
{ 
 int n,i,sum=0;
 printf("Enter the first number : ");
 scanf("%d",&n);
 
 int d=0;
 for(i=0;i*i<=n;i++){
    if(i*i==n){
      d=1;
      break;
      }
 }
 if(d == 1)
 printf("%d is a perfect square.\n",n);  
else
 printf("%d is not a  perfect square.\n",n); 
 return 0;      
}
