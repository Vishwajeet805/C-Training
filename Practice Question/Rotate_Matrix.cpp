#include <iostream>
using namespace std;

int main() {
    int m[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    for (int i = 0; i < 3; i++)
        for (int j = i; j < 3; j++)
            swap(m[i][j], m[j][i]);

    for (int i = 0; i < 3; i++) {
        int l = 0, r = 2;
        while (l < r)
            swap(m[i][l++], m[i][r--]);
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            cout << m[i][j] << " ";
        cout << endl;
    }
}
