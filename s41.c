#include<stdio.h>

int main(){
int arr[100], n,i,j, count;

printf("Enter size of array:");
scanf("%d",&n);

printf("Enter %d elements : ",n);
for(i=0 ; i < n; i++){
   scanf("%d",&arr[i]);
}

printf("Non -repeated elements are:");
 for( i = 0; i < n; i++){
    count = 0;
    
    for(j = 0; j < n; j++){
     if(arr[i] == arr[j]){
        count++;
     }
    }
    if (count == 1){
     printf("%d ", arr[i]);
    }
 }
 
 printf("\n");
 return 0;
}
