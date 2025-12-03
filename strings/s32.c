#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
 char str[200];
 int freq[200]={0};
 int i;
 
 
             printf("enter a string : ");
               fgets(str,sizeof str,stdin);

       for(i=0; str[i] != '\0'; i++){
                if(str[i] != '\n'){
                  freq[(unsigned char)str[i]]++;
                }
            }
            
         printf("Repeated  characters :");
         for(i=0 ; i< 256; i++){
         if(freq[i] > 1 && isprint(i)){
                      printf("%c ",i);
                      }
         }
           printf("\n");
           
   return 0;          
}
