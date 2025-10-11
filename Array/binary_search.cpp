#include <stdio.h>
#include<limits.h>
    
   int    BSearch(){
      int arr[6]={1,2,3,4,5,6};
    int target=4;
    int s=0;
    int end=5;
    while(s<=end)
    {
        int mid=(s+end)/2;
        if(arr[mid]==target){
            return mid;
            // printf("%d",mid);
        }
        else if(arr[mid]<target){
            s=mid+1;

        }else
        {   end=mid-1;
           
        }
        

    }
    return -1;
    


   }
int main(){

  int data=    BSearch();
  printf("%d",data);
    return 0;
}