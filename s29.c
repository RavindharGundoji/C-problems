#include<stdio.h>

int main(void)
{
 FILE *fp = fopen("txt.txt","r");      // open file for reading 
 char ch;
 
 fp = fopen("txt.txt","r");
 if(fp == NULL) {
    printf("error! could not open file.\n");
    return 1;
 }
 
 printf("File content without spaces : \n");
 
 while ((ch = fgetc(fp)) != EOF){ // read one character at a time 
       if(ch != ' '){            // skip spaces
         putchar(ch);           // print non - space character
       }
 }
 
 fclose(fp);
 
 return 0;
}
