#include<stdio.h>
#include<string.h>

int main(){
char str[200];
int lastindex[256];
int i, start =0, maxlen = 0, len;

printf("Enter a string: ");
fgets(str,sizeof str,stdin);

len = strlen(str);
str[strcspn(str,"\n")] = '\0';

for(i=0; i< 256; i++){
    lastindex[i] = -1;
}

for(i =0; str[i] != '\0'; i++){
   if(lastindex[(unsigned char)str[i]] >= start){
      start = lastindex[(unsigned char)str[i]] = i;
   }
   lastindex[(unsigned char)str[i]] = i;
   
   if(i - start + 1 > maxlen){
      maxlen = i - start + 1;
   }
 }
    
    printf("Length of longest substring without repeating characters : %d\n", maxlen);
    
    return 0;
}
