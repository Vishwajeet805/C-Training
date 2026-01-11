#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "anagram", t = "nagaram";
    int freq[256] = {0};

    for (char c : s) freq[c]++;
    for (char c : t) freq[c]--;

    for (int i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            cout << "Not Anagram";
            return 0;
        }
    }
    cout << "Anagram";
}
