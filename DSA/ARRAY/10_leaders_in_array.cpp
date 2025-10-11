#include <stdio.h>

int main()
{
    int arr[] = {1,18,3,2,6,4,7,5,13,10,8,15,17,12,9,14,11,16};
   
    int n = sizeof(arr) / sizeof(arr[0]);
    
    for (int i=0;i<n;i++){
        int flag=0;
        for (int j=i+1;j<n;j++){
            if(arr[i]<=arr[j])
            {
                flag=1;
                break;  
            }
        }
        if (flag==0)
        printf("%d ",arr[i]);
    } 
    return 0;
}
