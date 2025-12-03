#include<stdio.h>
#include<ctype.h>

int main()
{
  char str[100];
  int i;
  
  printf("enter the string : ");
  fgets(str,sizeof str,stdin);
  
  for(i=0; str[i] != '\0';i++){
     str[i] = toupper(str[i]);
     
  }
  printf("string in uppercase : %s\n",str);
  
  return 0;
}
