#include <iostream>
using namespace std;

int main() {
    string s1, s2;
    cout << "Enter two strings: ";
    cin >> s1 >> s2;

    // Step 1: Check if lengths are equal
    if (s1.length() != s2.length()) {
        cout << "Not Anagram";
        return 0;
    }

    // Step 2: Sort both strings manually (Bubble Sort)
    for (int i = 0; i < s1.length() - 1; i++) {
        for (int j = 0; j < s1.length() - i - 1; j++) {
            if (s1[j] > s1[j + 1]) {
                char temp = s1[j];
                s1[j] = s1[j + 1];
                s1[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < s2.length() - 1; i++) {
        for (int j = 0; j < s2.length() - i - 1; j++) {
            if (s2[j] > s2[j + 1]) {
                char temp = s2[j];
                s2[j] = s2[j + 1];
                s2[j + 1] = temp;
            }
        }
    }

    // Step 3: Compare both sorted strings
    if (s1 == s2)
        cout << "Anagram";
    else
        cout << "Not Anagram";

    return 0;
}
