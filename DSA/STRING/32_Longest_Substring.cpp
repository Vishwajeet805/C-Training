#include <iostream>
using namespace std;

int main() {
    string s = "abcabcbb";
    int maxLen = 0;

    for(int i = 0; i < s.length(); i++) {
        bool seen[256] = {false};
        int len = 0;
        for(int j = i; j < s.length(); j++) {
            if(seen[(int)s[j]]) break;
            seen[(int)s[j]] = true;
            len++;
        }
        if(len > maxLen) maxLen = len;
    }
    cout << maxLen; 
}
