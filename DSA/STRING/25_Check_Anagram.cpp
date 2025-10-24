#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string s1, s2;
    cout << "Enter two strings: ";
    cin >> s1 >> s2;

    for (int i = 0; i < s1.length() - 1; i++)
    {
        for (int j = 0; j < s1.length() - i - 1; j++)
        {
            if (s1[j] > s1[j + 1])
            {
                char temp = s1[j];
                s1[j] = s1[j + 1];
                s1[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < s2.length() - 1; i++)
    {
        for (int j = 0; j < s2.length() - i - 1; j++)
        {
            if (s2[j] > s2[j + 1])
            {
                char temp = s2[j];
                s2[j] = s2[j + 1];
                s2[j + 1] = temp;
            }
        }
    }

    (s1 == s2) ? cout << "Anagram" : cout << "Not Anagram";
    return 0;
}
