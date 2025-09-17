#include<stdio.h>
#include<string.h>
int main()
{
  char str[200];
  
  int i,j,count,d=0;
  char st;
  
  printf("\nenter the string :\n");
  fgets(str,sizeof(str),stdin);
  
  for(i=0;str[i] != '\0';i++){
  count =1;
     for(j=0;str[j] != '\0';j++){
     
     if(str[i] == str[j]){
      count++;
     }
     }
     if(count > d)
     {
      d=count;
      st = str[i];
     }
  }
  
  printf("max occurring character is: %c\n",st);
  printf("max occurring character is: %d\n",d);
}

