#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2,3, 3,4,7,9,10, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int count[15] = {0};
    for(int i = 0; i < n; i++) {
        count[arr[i]]++;
    }
    
    printf("Duplicate elements in the array:\n");
    for(int i = 0; i < 15; i++) {
        if(count[i] > 1) {
            printf("%d ", i);
        }
    }
    return 0;
}