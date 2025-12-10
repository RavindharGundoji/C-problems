#include<stdio.h>
int main()
{ 
int i,j,n1,n2,k=0,found;
int a[50],b[50],diff[200];
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
     found=0
       for(j=0;j<n2;j++){
        if(a[i] == b[j]){
            found=1;
            break;
        }
       }
       if(!found)
       {
         diff[k++]=a[i];
        }
      }
// if loop completes without miss match 
printf("difference of 2 arrays (A-B) : ");
for(i=0; i<k;i++){
 printf("%d ",diff[i]);
}
return 0;
}
