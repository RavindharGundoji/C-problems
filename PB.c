//63. checking number is palindrome in decimal and binary
#include<stdio.h>
int main()
{ 
 int num,sum=0,rem,temp;
 
 printf("enter  a number : ");
 scanf("%d",&num);
 
 temp=num;
 while(temp>0)
 {
  rem=temp % 10;
  sum +=rem;
  temp=temp/10;
 }
                 // checking with original number not temporary number 
 if(sum == num )
  printf("entered number is a palindrome :\n");
 else 
  printf("entered number is not a palindrome :\n");
  
  
  int bin[30],i=0,j;
   
   temp=num;
   while(temp>0)
   {
    bin[i++] = temp%2;
    temp=temp/2;
   }
   
   int flag=1;
   for(j=0;j<i/2;j++)
   {
    if(bin[j] != bin[i-j-1])
    {
    flag=0;
     break;
    }
   }
   if (flag)
    printf("%d is a palindrome in binary \n",num);
    else
   printf("%d is not a palindrome in binary \n",num);
 return 0;      
}
