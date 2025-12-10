#include<stdio.h>
int main()
{ 
int i,j,n,count,majority;
printf("enter the value of n  :");
scanf("%d",&n);
int arr[n];
printf("enter %d elements :",n);
for(i=0;i<n;i++)
    {
     scanf("%d",&arr[i]);
    }

 for (i=0;i<n;i++)
 {
  count =0;
  for(j=0;j<n;j++){
   if (arr[i] == arr[j]){
      count++;
   }
  }
  
  if(count > n/2)
  { 
    majority = arr[i];
    break;
  }
 }

 if (majority != -1 )
 {
  printf("majority element is : %d\n",majority);
 }
 else
 {
  printf("no majority element \n");
 }
 
return 0;
}
