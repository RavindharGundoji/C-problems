#include<stdio.h>
#include<string.h>

int main()
{
 char str[100], substr[100];
 
 printf("enter the main string : ");
 fgets(str,sizeof str , stdin);
 
  printf("enter the sub string : ");
 fgets(substr,sizeof substr , stdin); 
 
str[strcspn(str,"\n")] = '\0';
substr[strcspn(substr,"\n")] = '\0';

if(strstr(str,substr) != NULL)
       printf("substring found!\n");
 else 
 printf("substring not found!\n");
 return 0;
}
