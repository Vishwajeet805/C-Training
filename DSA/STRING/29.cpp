#include <stdio.h>

#include <iostream>
using namespace std;

int main()
{

    int i, j, found;
    string str, sub;
    cout << "Enter two strings: ";
    cin >> str >> sub;

    int n = str.size();
    int m = sub.size();
    int count = 0;

    for (i = 0; i <= n - m; i++)
    {
        found = 1;
        for (j = 0; j < m; j++)
        {
            if (str[i + j] != sub[j])
            {
                found = 0;
                break;
            }
        }

        if (found)
        {
            printf("Substring found at index %d\n", i);
            count++;
        }
    }

    if (count == 0)
        printf("Substring not found\n");

    return 0;
}
