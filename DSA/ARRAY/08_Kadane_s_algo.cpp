#include <stdio.h>
#include<limits.h>
int main()
{
    int arr[] = {1,3,2,6,4,7};
   
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int currsum=0;
    int maxsum=INT_MIN;
    for(int i = 0; i < n; i++){
        currsum+=arr[i];
        if(currsum>maxsum)
        maxsum=currsum; 
        if(currsum<0)
        currsum=0;
    }
    printf("Maximum subarray sum is %d",maxsum);    
    return 0;
}
