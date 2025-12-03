#include<stdio.h>
#include<string.h>
int main()
{
 char str[100], temp;
 int n,i,j,len;
 printf("\n enter a string \n");
 fgets(str,sizeof(str),stdin);
 
 len = strlen(str);
for(i=0;i<len-1;i++){
      for(j=0;j<len-1-i;j++)
      {
        if(str[j] > str [j+1]){
         temp = str[j];
         str[j] = str[j +1];
         str[j+1] = temp;
         
        }
      }
}
printf("sorted string : %s\n",str);

return 0;
}
