#include<stdio.h>
#include<ctype.h>

int sic(const char str1[], const char str2[]){
int i = 0;

   while (str1[i] != '\0' && str2[i] != '\0'){
     char c1 = tolower(str1[i]);
     char c2 = tolower(str2[i]);
      
     if(c1 != c2){
       return c1 - c2;
     }
     i++;
   }
   return tolower(str1[i]) - tolower(str2[i]);
}

  int main(){
    char s1[100], s2[100];
    
    printf("Enter first string: ");
    fgets(s1,sizeof s1, stdin);
    
    printf("Enter the second string: ");
    fgets(s2,sizeof s2,stdin);
    
    if(sic(s1,s2) == 0){
     printf("String are equal (ignoring case).\n");
     }else {
       printf("String are Not equal.\n");
     }
     
     return 0;
  }
