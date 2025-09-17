#include<stdio.h>
#include<string.h>

int main()
{
 char str[200] ;
 int freq[256]={0};  // 0 ensures no garbage values are stored.
 int i;
 
 printf("enter a string : ");
 fgets(str,sizeof str,stdin);
 
 
 for(i=0;str[i] != '\0';i++)
{
 freq[(unsigned char)str[i]]++; // uses ascii value as the index and increments it
                                // unsigned char converts the character into its ascii code (0-255)
}

printf("\n character : freqs : \n");
for(i=0;i<256;i++)
    {
    if (freq[i] != 0 && i != '\n'){
            printf(" '%c'  :   %d\n",i,freq[i]);// here freq[i] holds the freq(count) of character with ascii value i.
                }
    }
    return 0;
}
