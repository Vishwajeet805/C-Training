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
// 5=101
// 3=011
// a=110
//   011
// b=101=5
//   110
// a=011=3

