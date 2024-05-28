#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a = "Hello";
    string b = "World";
    string c;

    // a = "Gelo";
    // a.assign("Gelo");
    c = a + b;
    // c.erase(4, 3);
    // c.replace(4, 3,"so");
    c.insert(5, "Rahim");
    cout << a + b << endl;
    cout << c << endl;
    // cout << a << endl;
    // cout << b << endl;
    return 0;
}