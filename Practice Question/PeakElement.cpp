#include <iostream>
using namespace std;

int main() {
    int a[] = {1, 3, 20, 4, 1, 0};
    int n = 6;

    for (int i = 1; i < n - 1; i++) {
        if (a[i] > a[i-1] && a[i] > a[i+1]) {
            cout << a[i];
            break;
        }
    }
}
