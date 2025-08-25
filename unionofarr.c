#include<stdio.h>
int main()
{ 
int i,j,n1,n2,D,k=0;
int a[50],b[50],uni[200];
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


     for(i=0;i<n1;i++)
     {
        uni[k++]= a[i];
      }
       for(i=0;i<n2;i++)
       {
       D=0;
             for(j=0;j<k;j++)
               {
                 if(b[i] == uni[j]){
                                D=1;
                           break;
              }
         }
          if(!D)
               {
               uni[k++] = b[i];
                }
      }

// if loop completes without miss match 
printf("union of two arrays: ");
for(i=0; i<k;i++){
 printf("%d",uni[i]);
}
return 0;
}
