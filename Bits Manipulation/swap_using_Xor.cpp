#include <iostream>
using namespace std;
int main() {
    int a = 5, b = 9;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout << "After swapping: a=" << a << ", b=" << b;
    return 0;
}
