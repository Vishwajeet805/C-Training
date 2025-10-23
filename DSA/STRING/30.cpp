#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string s, int i, int j) {
    while (i < j) {
        if (s[i] != s[j]) return false;
        i++;
        j--;
    }
    return true;
}

int main() {
    string s;
    cout << "Enter string: ";
    cin >> s;

    int i = 0, j = s.size() - 1;
    bool possible = true;

    while (i < j) {
        if (s[i] != s[j]) {
            
            possible = isPalindrome(s, i + 1, j) || isPalindrome(s, i, j - 1);
            break;
        }
        i++;
        j--;
    }

    if (possible) cout << "true";
    else cout << "false";

    return 0;
}
