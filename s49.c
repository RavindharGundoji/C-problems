#include<stdio.h>
#include<ctype.h>
int main(){
 
 char str[100];
 int i, alpha = 0, digit = 0, spcl =0;
 
 printf("\nEnter a string :\n");
 fgets(str,sizeof str,stdin);
 
 
 for(i=0;str[i] != '\0';i++){
  if(isdigit(str[i]))
          digit++;
    else if (isalpha(str[i]))
          alpha++;
    else if (str[i] != '\n')
       spcl++;
 }
 
 printf("\nno of digits in string:%d",digit);
 printf("\nno of alphabets in string:%d",alpha);
printf("\nno of special in string:%d",spcl);
 
 return 0;
 }
