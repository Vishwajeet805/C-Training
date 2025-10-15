#include <iostream>
using namespace std;

int main() {
    string s, rev = "";
    cout << "Enter string: ";
    cin >> s;
    for (int i = s.length() - 1; i >= 0; i--)
        rev += s[i];
    if (s == rev)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";
}
