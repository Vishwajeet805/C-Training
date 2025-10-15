#include <iostream>
using namespace std;

int main() {
    string s, rev = "";
    cout << "Enter string: ";
    cin >> s;
    for (int i = s.length() - 1; i >= 0; i--)
        rev += s[i];
    cout << "Reversed: " << rev;
}
