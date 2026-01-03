#include <iostream>
using namespace std;

int first(int a[], int n, int x) {
    int l = 0, r = n - 1, ans = -1;
    while (l <= r) {
        int m = (l + r) / 2;
        if (a[m] >= x) r = m - 1;
        else l = m + 1;
        if (a[m] == x) ans = m;
    }
    return ans;
}

int last(int a[], int n, int x) {
    int l = 0, r = n - 1, ans = -1;
    while (l <= r) {
        int m = (l + r) / 2;
        if (a[m] <= x) l = m + 1;
        else r = m - 1;
        if (a[m] == x) ans = m;
    }
    return ans;
}

int main() {
    int a[] = {1,2,2,2,3,4};
    int n = 6, x = 2;
    cout << last(a,n,x) - first(a,n,x) + 1;
}
