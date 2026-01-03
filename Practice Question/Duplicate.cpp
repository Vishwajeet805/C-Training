#include <iostream>
using namespace std;

int main() {
    int a[] = {1,3,4,2,2};
    int slow = a[0], fast = a[0];

    do {
        slow = a[slow];
        fast = a[a[fast]];
    } while (slow != fast);

    slow = a[0];
    while (slow != fast) {
        slow = a[slow];
        fast = a[fast];
    }
    cout << slow;
}
