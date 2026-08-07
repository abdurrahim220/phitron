#include <bits/stdc++.h>
using namespace std;
int main()
{
    char x;
    cin >> x;
    switch (x)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        cout << "Vowel" << endl;
        break;

    default:
        cout << "Consonant" << endl;
    }
    return 0;
}