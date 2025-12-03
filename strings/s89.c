#include<stdio.h>
#include<string.h>
int  compare( const   char *s1,const   char *str){
     while(*s1 == *str){
            if(*s1 == '\0')
              return 0;
              s1++;
              str++;
     }
     return (*s1-*str);
}

char *cat( char *s1,const char *s3 ){

    char *p =s1;
     while(*s1!= '\0')
            s1++;
     while((*s1++ = *s3++) !='\0');
     
     return p;
     
}

char  *ncpy(char *s2,const char *s1 ){
char *p =s2;  
  while((*s2++ = *s1++) != '\0');
  return p;
}
int main(){
  char str1[10]="R";
  char str3[20]="Gundoji";
  char str2[20];
  char str[10] ="R";
  
  ncpy(str2, str1);
  
  printf(" string copied = %s\n",str2);
  
  cat(str1,str3);
  
  printf("the concatenated  string  is : %s\n",str1);
  
  int d=compare(str1,str);
  
     printf("%d",d);
}
