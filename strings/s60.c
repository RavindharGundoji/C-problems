#include<stdio.h>
#include<string.h>

int main(){
  char str[100];
  int freq[256] ={0};
  int i, minfreq = 9999;
  unsigned char minchar = '\0';
  
  
  printf("Enter a string: ");
  fgets(str, sizeof str,stdin);
  
  str[strcspn(str, "\n")] = '\0';
  
  for(i = 0; str[i] != '\0'; i++){
       freq[(unsigned char)str[i]]++;
  }
  
  for(i = 0; i< 256; i++){
     if(freq[i] > 0 && freq[i] < minfreq){
          minfreq = freq[i];
          minchar = (unsigned char)i;
     }
  }
  
  printf("The highest frequency character is '%c' and it appears %d times.\n",minchar,minfreq);
  
return 0;
}
