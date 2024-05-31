#include <bits/stdc++.h>
using namespace std;

bool isValid(char c)
{
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
};

int main()
{
    string s;
    getline(cin, s);

    string s2;
    for (char c : s)
    {
        if (isValid(c) || c == ' ')
        {
            s2 += c;
        }
    }
    stringstream ss(s2);
    string word;
    int count = 0;
    while (ss >> word)
    {
        count++;
    }
    cout << count << endl;
    return 0;
}