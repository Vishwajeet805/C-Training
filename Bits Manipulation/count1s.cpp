#include <iostream>
using namespace std;
int main() {
    int n = 29; // 11101
    int count = 0;
    while (n) {
        count += (n & 1);
        n >>= 1;
    }
    cout << "Number of set bits: " << count;
    return 0;
}

