#include <iostream>
using namespace std;
void gray(int n, string s)
{
    if (n == 0)
    {
        cout << s << endl;
        return;
    }
    gray(n - 1, s + "0");
    gray(n - 1, s + "1");
}
int main() { gray(3, ""); }
