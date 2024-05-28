#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a = "Hello";
    string b = "World";
    string c = "A";

    // a += b;
    // a.append(b);

    // a="HelloA" -->Works!
    // a=a+c; -->Works!
    // a=a+"A"; -->Works!
    // a[5] = 'A'; -->not works

    a.push_back('A'); // works
    a.pop_back();
    // a.pop_back();
    cout << a << endl;
    cout << b << endl;

    return 0;
}