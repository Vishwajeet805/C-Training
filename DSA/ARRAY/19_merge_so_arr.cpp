#include <stdio.h>
int main() {
    int nums1[12] = {1, 2, 3, 4, 6, 7}; // make space for total 12 elements
    int nums2[] = {2, 4, 5, 6, 7, 8};
    int m = 6;  // number of initialized elements in nums1
    int n = 6;  // number of elements in nums2

    int i = m - 1;
    int j = n - 1;
    int k = m + n - 1;

    while (i >= 0 && j >= 0) {
        if (nums1[i] > nums2[j])
            nums1[k--] = nums1[i--];
        else
            nums1[k--] = nums2[j--];
    }

    while (j >= 0)
        nums1[k--] = nums2[j--];

    printf("Merged sorted array:\n");
    for (int index = 0; index < m + n; index++)
        printf("%d ", nums1[index]);

    return 0;
}