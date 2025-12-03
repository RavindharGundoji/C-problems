#include<stdio.h>
#include<string.h>
#include<ctype.h>

int isvowel(char ch) {
     ch = tolower(ch);
     return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main(){
    char str[100];
    int left = 0, right;
    
    printf("enter a string : ");
    fgets(str,sizeof str,stdin);
    
    str[strcspn(str, "\n")] = '\0';
    
    right = strlen(str) - 1;
    
    while (left < right){
    if(!isvowel(str[left])){
         left++;
    }else if (!isvowel(str[right])){
      right--;
    }else {
    
        // swap vowels
       char temp = str[left];
       str[left] = str[right];
       str[right] = temp;
       left++;
       right--;
       
    }
  }


      printf("string after reversing vowels:  %s\n",str);
      
      return 0;
}
