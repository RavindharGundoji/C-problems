#include<stdio.h>
#include<string.h>

int main(){
  char str[100], ch1 , ch2;
  int i;
  
  printf("Enter a string:");
  fgets(str,sizeof str,stdin);
  str[strcspn(str, "\n")] = '\0';
  
  printf("Enter the character to replace: ");
  scanf("%c", &ch1);
  
  getchar();
  
   printf("Enter the new character  ");
  scanf("%c", &ch2);
  
  for(i=0; str[i] != '\0'; i++){
        if(str[i] == ch1){
            str[i] = ch2;
            break;
        }
  }
  printf("Result: %s\n",str);
  
  return 0;
}
