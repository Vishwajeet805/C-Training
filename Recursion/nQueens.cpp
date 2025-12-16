#include <iostream>
using namespace std;
int n = 4, c = 0;
bool safe(int b[][10], int r, int c)
{
    for (int i = 0; i < r; i++)
        if (b[i][c])
            return false;
    for (int i = r, j = c; i >= 0 && j >= 0; i--, j--)
        if (b[i][j])
            return false;
    for (int i = r, j = c; i >= 0 && j < n; i--, j++)
        if (b[i][j])
            return false;
    return true;
}
void solve(int b[][10], int r)
{
    if (r == n)
    {
        c++;
        return;
    }
    for (int i = 0; i < n; i++)
        if (safe(b, r, i))
        {
            b[r][i] = 1;
            solve(b, r + 1);
            b[r][i] = 0;
        }
}
int main()
{
    int b[10][10] = {0};
    solve(b, 0);
    cout << c;
}