// count of freq of elements in an array
#include<stdio.h>
int main()
{
 int arr[5]={1,2,3,1,2,2};
 int i,j,count=0,freq[10];
 
 for(i=0;i<5;i++){
 
      count=1;
      if(arr[i] != -1){
                 for (j=i+1;j<5;j++)
                         {
                       if(arr[i] == arr[j])
                            {
                                count++;
                                arr[j] =-1;
                             }
    
                          }
                           freq[i]=count;
                       }
           }
           
           for(i=0 ;i<5;i++)
           {
            if (arr[i] != -1)
            {
             printf("no of %d  is  =  %d \n",arr[i],freq[i]);
            }
           }
           return 0;
}
