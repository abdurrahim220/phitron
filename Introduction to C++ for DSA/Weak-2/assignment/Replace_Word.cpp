#include <bits/stdc++.h>
using namespace std;

void repSub(string &s, const string &x)
{
    size_t pos = 0;
    while ((pos = s.find(x, pos)) != string::npos)
    {
        s.replace(pos, x.length(), "#");
        pos += 1;
    }
}

int main()
{
    int t;
    cin >> t;
    cin.ignore();

    for (int i = 0; i < t; ++i)
    {
        string s, x;
        getline(cin, s, ' ');
        getline(cin, x);
        repSub(s, x);
        cout << s << endl;
    }

    return 0;
}
