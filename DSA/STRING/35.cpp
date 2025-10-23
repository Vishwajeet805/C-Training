#include <iostream>
using namespace std;

int main() {
    string s = "abc";
    string t = "ahbgdc";
    int i = 0, j = 0;

    while(i < s.length() && j < t.length()) {
        if(s[i] == t[j]) i++;
        j++;
    }

    cout << (i == s.length() ? "Yes" : "No");
}
