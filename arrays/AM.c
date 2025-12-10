// addition of two matrices 
#include<stdio.h>
int main()
{
int i,j;
 int mat1[3][4] = {{1,2,8,4},{5,6,7,8},{3,2,1,4}};
 int mat2[3][4] = {{2,5,4,2},{1,5,2,6},{9,4,7,2}};
 int mat3[3][4];
 for (i=0;i<3;i++){
   for(j=0;j<4;j++){
           mat3[i][j]=mat1[i][j]+mat2[i][j];
           }
      }     
            printf("mat3 is :\n");
            for(i=0;i<3;i++){
                for(j=0;j<4;j++){
                printf("%d\t",mat3[i][j]);
               }
                 printf("\n");
             }  
     return 0;
}
