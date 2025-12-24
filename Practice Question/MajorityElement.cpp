#include <iostream>
using namespace std;

int majorityElement(int a[], int n) {
    int count = 0, candidate = 0;

    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = a[i];
            count = 1;
        } else if (a[i] == candidate)
            count++;
        else
            count--;
    }
    return candidate;
}

int main() {
    int a[] = {2,2,1,1,2,2,2};
    int n = 7;
    cout << majorityElement(a, n);
}
