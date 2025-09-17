#include<stdio.h>
#include<ctype.h>

int main(){
 
 char str[200];
 int i;
 
 printf("Enter a string : ");
 fgets(str,sizeof str,stdin);
 
 for(i=0; str[i] != '\0' ; i++){
    if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i'||
        str[i] == 'o' || str[i] == 'u'   ){
        str[i] = toupper(str[i]);
        }
 }
 
 printf("modified string : %s",str);
}
