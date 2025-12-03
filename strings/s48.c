#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
  char str[100];
  int i;
  
  printf("enter the string :  ");
  
  fgets(str,sizeof str,stdin);
  
  
  for(i=0; str[i] != '\0';i++){
    if(islower(str[i]))
         str[i] = toupper(str[i]);
    else if(isupper(str[i])) 
         str[i] = tolower(str[i]);
  }
  
  printf("\nThe toggeled string is:%s",str);
}
