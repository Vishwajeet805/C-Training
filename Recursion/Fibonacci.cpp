#include <iostream>
using namespace std;
int f[100];
int fib(int n)
{
    if (n <= 1)
        return n;
    if (f[n])
        return f[n];
    return f[n] = fib(n - 1) + fib(n - 2);
}
int main() { cout << fib(10); }
