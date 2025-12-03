#include<stdio.h>
#include<ctype.h>

int main()
{
 char str[200];
 int i;
 
 printf("enter a sentence : ");
 fgets(str,sizeof(str),stdin);
 
 for(i=0; str[i] != '\0';i++){
   if(islower(str[i])){
      str[i] = toupper(str[i]);
   }
   else if(isupper(str[i])){
       str[i] = tolower(str[i]);
   }
 }
 
 printf("modified sentence : %s", str);
 
 return 0;
}
