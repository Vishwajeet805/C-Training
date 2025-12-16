#include <iostream>
using namespace std;
void gen(int o, int c, string s)
{
    if (o == 0 && c == 0)
    {
        cout << s << endl;
        return;
    }
    if (o > 0)
        gen(o - 1, c, s + "(");
    if (c > o)
        gen(o, c - 1, s + ")");
}
int main() { gen(3, 3, ""); }