#include <bits/stdc++.h>
using namespace std;
int main()
{
    char ch;
    cin >> ch;

    if (ch >= '0' && ch <= '9')
    {
        cout << "IS DIGIT" << endl;
    }
    else
    {
        cout << "ALPHA" << endl;
        if (ch >= 'a' && ch <= 'z')
        {
            cout << "IS SMALL" << endl;
        }
        else
        {
            cout << "IS CAPITAL" << endl;
        }
    }

    return 0;
}