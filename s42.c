#include<stdio.h>

int main(){
  int a[10][10], b[100];
  int m,n,i,j, k=0;
  
  printf("Enter no of rows and columns :");
  scanf("%d %d",&m,&n);
  
  printf("Enter elements of %d x %d matrix : \n",m,n);
  for(i=0; i < m; i++){
       for(j=0; j < n;j++){
            scanf("%d",&a[i][j]);
       }
  }
  
  // copy elements row - wise into 1D array 
  for(i=0; i < m; i++){
       for(j=0; j < n;j++){
            b[k++] = a[i][j];
       }
  }
  
  printf("1D Array (row - wise): \n");
  for(i=0; i<k;i++){
     printf("%d ",b[i]);
  }
  printf("\n");
  
  return 0;
}
