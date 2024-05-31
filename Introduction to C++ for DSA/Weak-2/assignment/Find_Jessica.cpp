#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);

    string x = "Jessica";

    stringstream ss;
    ss << s;
    string word;
    int flag = 1;
    while (ss >> word)
    {
        if (word == x)
        {
            flag = 0;
        }
    }
    if (flag == 1)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
    return 0;
}