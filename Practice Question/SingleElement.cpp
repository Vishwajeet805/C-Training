#include <iostream>
using namespace std;

int main() {
    int a[] = {4,1,2,1,2};
    int n = 5, x = 0;

    for (int i = 0; i < n; i++)
        x ^= a[i];

    cout << x;
}