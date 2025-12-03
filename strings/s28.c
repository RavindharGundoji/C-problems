#include<stdio.h>
#include<ctype.h>
int main(){
char ch;

printf("enter a character : ");
scanf("%c",&ch);

if(islower(ch)){
  printf("\nentered character is lower \n");
}
else{
 printf("\nentered character is not  lower \n");
 }
 return 0;
 }
