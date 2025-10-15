#include <iostream>
using namespace std;

int main() {
    string s, res = "";
    cout << "Enter string: ";
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        bool found = false;
        for (int j = 0; j < res.size(); j++) {
            if (s[i] == res[j]) {
                found = true;
                break;
            }
        }
        if (!found)
            res += s[i];
    }
    cout << "After removing duplicates: " << res;
}
