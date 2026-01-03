#include <iostream>
using namespace std;

int main() {
    int a[] = {-2,1,-3,4,-1,2,1,-5,4};
    int n = 9;
    int curr = a[0], best = a[0];

    for (int i = 1; i < n; i++) {
        curr = max(a[i], curr + a[i]);
        best = max(best, curr);
    }
    cout << best;
}
