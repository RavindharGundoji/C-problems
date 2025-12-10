#include<stdio.h>

int main()
{
 char arr[100];
 int n,i;
 
 printf("Enter no of characters : ");
 scanf("%d",&n);
 
 printf("Enter %d characters :",n);
 for(i=0; i<n ;i++)
 {
  scanf("%c",&arr[i]);
 }
 printf("\n");
 
 printf("\n character    ASCII value \n");
 for( i=0 ; i<n ;i++)
 {
  printf("  %c       %d\n",arr[i],arr[i]);
 }
 return 0;
}
