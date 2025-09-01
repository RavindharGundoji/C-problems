#include<stdio.h>


  void d(int arr[], int *n,int pos)
  {
     if(pos < 0 || pos >= *n){
        printf("invalid position! \n");
        return;
     }
     for(int i=pos ; i<*n-1 ; i++)
     {
       arr[i]  = arr[i+1];
     }
     (*n)--;
   }

int main()
{ 
 int arr[100],n,i,pos;
 
 printf("Enter size of the array : ");
 scanf("%d",&n);
 
 printf("enter the elements of the array : ");
 
 for(i=0;i<n;i++)
 {
   scanf("%d",&arr[i]);
 }
 
 printf("\n  enter the position of the element to remove : \n");
 scanf("%d",&pos);
 d(arr,&n,pos);
 
 printf("Reversed array : ");
 for(i=0 ; i<n ; i++)
 {
   printf("%d ", arr[i]);
 }
 
 return 0;
}
