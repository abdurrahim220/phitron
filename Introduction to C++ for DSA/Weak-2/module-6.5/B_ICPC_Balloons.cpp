#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool solved[26] = {false};
        int totalBalloons = 0;

        for (int i = 0; i < n; i++)
        {
            char problem = s[i];
            if (!solved[problem - 'A'])
            {
                totalBalloons += 2;
                solved[problem - 'A'] = true;
            }
            else
            {
                totalBalloons += 1;
            }
        }

        cout << totalBalloons << endl;
    }

    return 0;
}