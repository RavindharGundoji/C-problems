#include<stdio.h>

int main(){
  int a[10][10],n,i,j, flag = 1;
  
  printf("Enter size of square matrix (n): ");
  scanf("%d",&n);
  
  printf("Enter elements of %d x %d matrix : \n",n,n);
  for(i = 0; i < n; i++){
      for(j =0 ; j < n; j++){
           scanf("%d",&a[i][j]);
      }
  }
  
  for(i =0 ; i < n; i++){
     for(j =0 ; j < n; j++){
          if(a[i][j] != a[j][i]){
             flag = 0;
             break;
          }
     }
     if (flag == 0) break;
  }
  
  if(flag == 1){
       printf("Matrix is symmetric \n");
       }
   else{
       printf("Matrix is not symmetric \n");
  }
  
  return 0;
}
