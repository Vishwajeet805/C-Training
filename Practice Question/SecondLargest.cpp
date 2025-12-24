#include <iostream>
using namespace std;

int main() {
    int a[6] = {10, 5, 20, 8, 15, 20};
    int largest = -1, second = -1;

    for (int i = 0; i < 6; i++) {
        if (a[i] > largest) {
            second = largest;
            largest = a[i];
        } else if (a[i] > second && a[i] != largest) {
            second = a[i];
        }
    }
    cout << second;
}
