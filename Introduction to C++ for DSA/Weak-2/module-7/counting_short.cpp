#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int frq[26] = {0};

    for (char c : s)
    {
        frq[c - 'a']++;
        // cout << c << endl;
    }

    for (char i = 'a'; i <= 'z'; i++)
    {
        // if (frq[i - 'a'] > 0)
        // {
        //     cout << i << " -> " << frq[i - 'a'] << endl;
        // }

        for (int j = 0; j < frq[i - 'a']; j++)
        {
            cout << i;
        }
        // cout << i << " - " << frq[i - 'a'] << endl;
    }

    return 0;
}