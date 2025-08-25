#include<stdio.h>
int main()
{ 
int i,temp,j,n;
int arr[50];

printf("size of an array is :");
scanf("%d",&n);

printf("enter %d elements of an array :  \n",n);
for(i=0;i<n;i++)
{
 scanf("%d",&arr[i]);
} 

for(i=0,j=n-1;i<j;i++,j--)
{ 
 temp=arr[i];
 arr[i]=arr[j];
 arr[j]=temp;
}

printf("reversed array is :");
for(i=0;i<n;i++){
printf("%d ",arr[i]);
}
printf("\n");
return 0;
}
