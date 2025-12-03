#include<stdio.h>
#include<string.h>
char* mystrcpy(char *s2ptr , char *s1ptr);
int main()
{
  char str1[100] = {"Linux"};
  char str2[100];
  
  mystrcpy(str2,str1);
  
  printf("str1   is  %s\n", str1);
  printf("str2  is  %s\n",str2);
  
  return 0;
}
char* mystrcpy(char *s2ptr , char *s1ptr)
{
  char *ptr = s2ptr;
     while ((*s2ptr++ = *s1ptr++) !='\0'); // copies until  null terminator 
     return ptr;
  }

