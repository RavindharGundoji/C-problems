#include<stdio.h>
int main()
{ 
int i,n;
int arr1[50],arr2[50];
printf("enter size an array :");
scanf("%d",&n);

printf("enter %d elements of an array 1:",n);
for(i=0;i<n;i++)
{
 scanf("%d",&arr1[i]);
}

printf("enter %d elements of an array 1:",n);
for(i=0;i<n;i++)
{
 scanf("%d",&arr2[i]);
}


for(i=0;i<n;i++)
{
 if(arr1[i] != arr2[i])
 {
  printf("arrays are not equal\n");
  break;
 }
}

// if loop completes without miss match 
printf("arrays are equal \n");

}
