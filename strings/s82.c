
#include<stdio.h>
#include<string.h>

void rstring(char str[], int start, int end){
       if(start >= end)
         return;
         
         
       str[start] ^= str[end];
       str[end]  ^= str[start];
       str[start] ^= str[end];
       
       
       rstring(str,start + 1, end - 1);

}

 int main() {
    char str[100];
    
    printf("Enter a string: ");
    scanf("%s",str);
    
    int len = strlen(str);
    
    rstring(str, 0 ,len - 1);
    
    printf("Reversed string: %s\n", str);
    
    return 0;

 } 
