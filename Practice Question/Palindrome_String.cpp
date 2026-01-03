#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "madam";
    int l = 0, r = s.length() - 1;

    while (l < r) {
        if (s[l++] != s[r--]) {
            cout << "Not Palindrome";
            return 0;
        }
    }
    cout << "Palindrome";
}
