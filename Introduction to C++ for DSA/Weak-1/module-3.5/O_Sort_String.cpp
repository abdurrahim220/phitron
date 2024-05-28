#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count[26];

    for (int i = 0; i < 26; i++)
    {
        count[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        char s;
        cin >> s;
        int index = s - 'a';
        count[index]++;
    }

    for (int i = 0; i < 26; i++)
    {
        char ch = i + 'a';
        while (count[i] > 0)
        {
            cout << ch;
            count[i]--;
        }
    }

    return 0;
}