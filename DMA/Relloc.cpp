#include <stdlib.h>
#include <stdio.h>

int main() {
    int *arr;
    int n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Dynamically allocate memory using malloc
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1; // Exit if memory allocation fails
    }

    // Input elements
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Display elements
    printf("You entered:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free the allocated memory
    
       // Reallocate memory to hold double the number of elements
    arr = (int *)realloc(arr, 2 * n * sizeof(int));
    if (arr == NULL) {
        printf("Memory reallocation failed\n");
        return 1; // Exit if memory reallocation fails
    }

    // Input additional elements
    printf("Enter %d more integers:\n", n);
    for (i = n; i < 2 * n; i++) {
        scanf("%d", &arr[i]);
    }

    // Display all elements
    printf("You entered:\n");
    for (i = 0; i < 2 * n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free the allocated memory
    free(arr);
    return 0;
}