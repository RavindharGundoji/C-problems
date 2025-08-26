// calculate the power of a number using loops and if else statements
#include<stdio.h>
int main()
{ 
 int base,exp,i;
 long long result = 1;
 printf("Enter base :");
 scanf("%d",&base);
 
 printf("Enter exponent:");
 scanf("%d",&exp);
 
 if(exp == 0){
    result =1;
 }
 
 else if (exp > 0)
 {
  for (i=1;i <= exp; i++)
  {
   result *=base;
  }
 }
 
 else{ 
   for (i=1;i<= -exp;i++)
   { 
    result *=base;
   }
   printf("%d^%d = 1/%.0f (fractional value )\n",base,exp,(double)result);
   return 0;
 }
 printf("%d^%d = %lld\n",base,exp,result);
 return 0;      
}
