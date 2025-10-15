#include <stdio.h>

int main() {
    int n;
    int arr[] = {1, -4, -2, -3, -1, 4};
    n = sizeof(arr) / sizeof(arr[0]);

    int i = 0;
    while (i<n) 
    {
        /* code */
        if ((arr[i] < 0 && i % 2 == 0) || (arr[i] >= 0 && i % 2 != 0)) 
        {
            i++;
        } 
        else 
        {
            int j = i + 1;
            while (j < n && ((arr[j] < 0 && i % 2 == 0) || (arr[j] >= 0 && i % 2 != 0))) 
            {
                j++;
            }
            if (j == n) 
            {
                break;
            } 
            else 
            {
                int temp = arr[j];
                for (int k = j; k > i; k--) 
                {
                    arr[k] = arr[k - 1];
                }
                arr[i] = temp;
                i++;
            }
        }
    }
    

    printf("Array after rearranging: ");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
