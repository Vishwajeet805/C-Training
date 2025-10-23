#include <iostream>
using namespace std;

int main() {
    string s;
    cout << "Enter string: ";
    cin >> s;

    int n = s.length();

    
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (s[j] > s[j + 1]) {
                char temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }

   
    int stack[10] = {0}; 
    cout << s << "\n";   
    int i = 0;
    while (i < n) {
        if (stack[i] < i) {
            if (i % 2 == 0) {
                char temp = s[0];
                s[0] = s[i];
                s[i] = temp;
            } else {
                char temp = s[stack[i]];
                s[stack[i]] = s[i];
                s[i] = temp;
            }
            cout << s << "\n";
            stack[i]++;
            i = 0;
        } else {
            stack[i] = 0;
            i++;
        }
    }

    return 0;
}
