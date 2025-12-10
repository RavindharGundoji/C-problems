// 
#include<stdio.h>
int main()
{
 int arr[5]={1,2,2,2,2};
 int i,j,count=0,freq[10],d;
 
 for(i=0;i<5;i++){
      count=0;
                 for (j=i+1;j<5;j++)
                         {
                       if(arr[i] == arr[j])
                            {
                                count++;
                             }
    
                          }
                          if(count > 5/2){
                               d = arr[i];
                               printf("The majority element is %d\n",d);
                              return 0;
                          }
                          
                       }
           
               printf("no majority element");
     return 0;      
}
