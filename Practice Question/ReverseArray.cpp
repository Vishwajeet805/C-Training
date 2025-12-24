#include <iostream>
using namespace std;

int main() {
    int a[5] = {1,2,3,4,5};
    int l = 0, r = 4;

    while (l < r) {
        int t = a[l];
        a[l] = a[r];
        a[r] = t;
        l++; r--;
    }

    for (int i = 0; i < 5; i++)
        cout << a[i] << " ";
}
