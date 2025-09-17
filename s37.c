#include<stdio.h>
#include<string.h>

int main(){
   char n1[100], n2[100];
   int len1,  len2, result[200] = {0};
   int i, j;
   
   printf("enter first number :");
   scanf("%s",n1);
   printf("enter second number:");
   scanf("%s",n2);
   
   
   len1 = strlen(n1);
   len2 = strlen(n2);
   
   // multiply digits from end (like manual multiplication)
   for(i = len1 -1; i >= 0; i--){
        for(j = len2 - 1; j >= 0; j--){
         int mul = (n1[i] - '0') * (n2[j] - '0');
         int pos1 = i + j, pos2 = i + j + 1;
         int sum = mul + result[pos2];
         
         result[pos2] = sum % 10;
         result[pos1] += sum/10;
        }
    }
    
    i=0;
    while(i < len1 + len2 && result[i] == 0){ 
    i++;
    
    if(i == len1 + len2){
                printf("0\n"); // product is zero
    }else{
      for(; i < len1 + len2; i++){
            printf("%d",result[i]);
      }printf("\n");
    }
    return 0;
  }
  
}
