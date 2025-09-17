#include<stdio.h>

int main()
{
  char str[200] , str1[200];
  int p,len,k=0;
  
  printf("enter string : ");
  fgets(str,sizeof(str),stdin);
  
  printf("enter starting position and substring length : " );
  scanf("%d %d",&p,&len);
  
  while(k<len){
   str1[k] = str[p+k-1];
   k++;
  }
  str1[k] = '\0';
  
  printf("The substring retrieved from a given string is : %s \n",str1);
  
  return 0;
}
