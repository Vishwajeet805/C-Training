#include <iostream>
using namespace std;

int binarySearch(int a[], int n, int key) {
    int l = 0, r = n - 1;

    while (l <= r) {
        int mid = (l + r) / 2;
        if (a[mid] == key) return mid;
        else if (a[mid] < key) l = mid + 1;
        else r = mid - 1;
    }
    return -1;
}

int main() {
    int a[5] = {2,4,6,8,10};
    cout << binarySearch(a, 5, 8);
}
