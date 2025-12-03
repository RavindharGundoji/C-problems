#include<stdio.h>
char* strcat(char s1[], char s2[]);
int main()
{
  char str1[200],str2[200];
  
  printf("enter str1 : ");
  fgets(str1,sizeof str1,stdin);
  
    printf("enter str2 : ");
  fgets(str2,sizeof str2,stdin);
 
  strcat(str1,str2);
  printf("the combined string is: %s\n",str1);
}

char* strcat(char s1[], char s2[])
{
 int i=0 ,j=0;
 
 while(s1[i] != '\0'){
    i++;
 };
 
 while(s2[j] !='\0'){
 s1[i] = s2[j];
  i++;
  j++;
  }
  s1[i] = '\0';
  return s1;
}
