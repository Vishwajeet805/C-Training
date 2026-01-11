#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "egg", t = "add";
    int m1[256] = {0}, m2[256] = {0};

    for (int i = 0; i < s.size(); i++) {
        if (m1[s[i]] != m2[t[i]]) {
            cout << "Not Isomorphic";
            return 0;
        }
        m1[s[i]] = i + 1;
        m2[t[i]] = i + 1;
    }
    cout << "Isomorphic";
}
