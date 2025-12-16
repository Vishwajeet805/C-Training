#include <iostream>
using namespace std;
int coin(int a[], int n, int s)
{
    if (s == 0)
        return 1;
    if (s < 0 || n == 0)
        return 0;
    return coin(a, n, s - a[n - 1]) + coin(a, n - 1, s);
}
int main()
{
    int a[] = {1, 2, 3};
    cout << coin(a, 3, 4);
}