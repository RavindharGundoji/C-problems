#include<stdio.h>
int main()
{ 
int i,j,n1,n2,k=0;
int a[50],b[50],inter[200];
printf("enter size an array :");
scanf("%d",&n1);

printf("enter %d elements of an array 1:",n1);
for(i=0;i<n1;i++)
    {
     scanf("%d",&a[i]);
    }
printf("enter size an array :");
scanf("%d",&n2);

printf("enter %d elements of an array 1:",n2);
   for(i=0;i<n2;i++)
    {
       scanf("%d",&b[i]);
    }


     for(i=0;i<n1;i++){
       for(j=0;j<n2;j++){
        if(a[i] == b[j]){
            inter[k++]=a[i];
            break;
        }
       }
      }
// if loop completes without miss match 
printf("union of two arrays: ");
for(i=0; i<k;i++){
 printf("%d ",inter[i]);
}
return 0;
}
