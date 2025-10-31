//check arr is sorted using recursion
#include <stdio.h>
int isSorted(int arr[], int n) {

    if (n == 0 || n == 1) {
        return 1;
    }
  
    if (arr[0] > arr[1]) {
        return 0;
    }

    return isSorted(arr++, n--);
}
int main() {
    int arr[] = {1, 2, 7, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    if (isSorted(arr, n)) {
        printf("Array is sorted.\n");
    } else {
        printf("Array is not sorted.\n");
    }

    return 0;
}