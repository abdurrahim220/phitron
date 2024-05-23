#include <bits/stdc++.h>
using namespace std;
int main()
{
    char a;
    cin >> a;
    if (a >= '0' && a <= '9')
    {
        cout << "IS DIGIT" << endl;
    }
    else
    {
        cout << "ALPHA" << endl;
        if (a >= 97 && a <= 122)
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