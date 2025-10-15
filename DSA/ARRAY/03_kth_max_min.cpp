#include <stdio.h>
int main()
{
    int arr[] = {9,5,8,6,1,7,3,4,2,0};
    int min, max,k;
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("Enter the value of k: ");
    scanf("%d",&k);
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("Kth Minimum: %d\n", arr[k-1]);
    printf("Kth Maximum: %d\n", arr[n-k]);
    return 0;
}