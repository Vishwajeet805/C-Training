#include <iostream>
using namespace std;
int m[4][4] = {{1, 0, 0, 0}, {1, 1, 0, 1}, {0, 1, 0, 0}, {1, 1, 1, 1}};
void path(int i, int j)
{
    if (i == 3 && j == 3)
    {
        cout << "Found\n";
        return;
    }
    if (i > 3 || j > 3 || m[i][j] == 0)
        return;
    m[i][j] = 0;
    path(i + 1, j);
    path(i, j + 1);
}
int main() { path(0, 0); }