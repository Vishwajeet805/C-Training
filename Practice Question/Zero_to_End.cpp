#include <iostream>
using namespace std;

int main() {
    int a[] = {0,1,0,3,12};
    int n = 5, idx = 0;

    for (int i = 0; i < n; i++)
        if (a[i] != 0)
            a[idx++] = a[i];

    while (idx < n)
        a[idx++] = 0;

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}
