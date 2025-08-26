// finding ascii value of a given character 
#include<stdio.h>
int main()
{ 
 int i;
char ch = 'a';
 
 for(i=0;i<=127;i++)
 {
   if(ch == i)
   {
    printf("ASCII value of '%c' is %d\n",ch,i);
    break;
   }
 }
 return 0;
}
