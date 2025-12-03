
#include<stdio.h>
#include<string.h>

int main() {
 char str[200];
 char words[50][50];
 int i, j = 0, k= 0, n;
 
 printf("Enter a string : ");
 fgets(str,sizeof str,stdin);
 
 n=strlen(str);
 
 for(i=0; i < n; i++){
  if(str[i] != ' ' && str[i] != '\0' && str[i] != '\n'){
         words[k][j++] = str[i];
  }else{
         words[k][j] = '\0';
         k++;
          j = 0;
       }
 }

printf("Reserved words: ");
 for(i = k - 1 ; i >=0; i--){
         printf("%s",words[i]);
         if(i > 0) printf(" ");
 }
 printf("\n");
 
 return 0;
}
