#include <stdio.h>

int main()
{
    int n = 5;
    int arr[4] = {1, 2, 3, 5};
    int Xor = 0;
    for (int i = 1; i <= n; i++)
    {
        Xor = Xor ^ i;
    }
    for (int i = 0; i < n - 1; i++)
    {
        Xor = Xor ^ arr[i];
    }
    printf("Missing number is %d", Xor);
    return 0;
}