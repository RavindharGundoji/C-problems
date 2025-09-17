#include<stdio.h>
#include<string.h>

void substring(char str[], char sub[], int start,int length){
     int i;
     
     for(i = 0; i < length && str[start + i] != '\0'; i++){
          sub[i] = str[start + i];
     }
      sub[i] = '\0';
      
}

   int main() {
      char str[100], sub[100];
      int start, length;
      
      printf("Enter a string: ");
      fgets(str, sizeof str,stdin);
      
      str[strcspn(str,"\n")] = '\0';
      
      printf("Enter starting index: ");
      scanf("%d", &start);
      
      printf("Enter length: ");
      scanf("%d",&length);
      
      substring(str,sub,start,length);
      
      printf("Extracted substring: %s\n",sub);
   }
