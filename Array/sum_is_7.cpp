#include <stdio.h>
int main()
{
    int arr[12] = {1, 4, 7, 2, 4, 6, 7, 4, 3, 3, 6, 3};
    int key = 8;
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            if (arr[i] + arr[j] == key)
            {
                printf("(%d,%d)(%d %d)\n", arr[i], arr[j], i, j);
                break;
            }
        }
    }
    
    return 0;
}