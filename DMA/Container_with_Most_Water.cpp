#include <stdlib.h>
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int *height = (int *)malloc(n * sizeof(int));
    printf("Enter %d Elements \n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &height[i]);
    }

    int i = 0;
    int j = n - 1;
    int res = 0;
    int left = 0, right = 0;

    while (i < j)
    {
        int area = max(res, (j - i) * min(height[i], height[j]));
        if (area > res)
        {
            res = area;
            left = i;
            right = j;
        }
        if (height[i] < height[j])
            i++;
        else
            j--;
    }

    printf("\nMaximum water area = %d", res);
    printf("\nBetween bars %d (height %d) and %d (height %d)", left, height[left], right, height[right]);
    printf("\nWidth = %d\n", right - left);

    free(height);
    return 0;
}