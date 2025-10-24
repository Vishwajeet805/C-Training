#include <iostream>
using namespace std;

int main() {
    string s1 = "abcd";
    string s2 = "cdab";
    bool isRot = false;

    if(s1.length() == s2.length()) {
        string temp = s1 + s1;
        for(int i = 0; i <= temp.length() - s2.length(); i++) {
            int j;
            for(j = 0; j < s2.length(); j++)
                if(temp[i + j] != s2[j]) break;
            if(j == s2.length()) isRot = true;
        }
    }

    cout << (isRot ? "Yes" : "No"); 
}
