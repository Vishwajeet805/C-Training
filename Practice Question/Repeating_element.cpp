#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int a[] = {1, 5, 3, 4, 3, 5, 6};
    int n = 7;
    unordered_set<int> s;

    for (int i = n - 1; i >= 0; i--) {
        if (s.count(a[i])) {
            cout << a[i];
            return 0;
        }
        s.insert(a[i]);
    }
    cout << "No Repetition";
}
