#include <stdio.h>
int main()
{
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
   
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int left = 0, right = n - 1;

    while(left <= right) {
        if(arr[left] < 0 && arr[right] < 0)
            left++;
        else if(arr[left] >= 0 && arr[right] < 0) {
             int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
            left++;
            right--;
        }
        else if(arr[left] >= 0 && arr[right] >= 0)
            right--;
        else {
            left++;
            right--;
        }
    }

    printf("Array after moving negatives to front:\n");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}