#include <bits/stdc++.h>
using namespace std;

int *fun()
{
    int *p = new int;
    cout << "fun : " << p << endl;
    *p = 100;
    return p;
}

int main()
{
    int *ptr = fun();
    cout << "main : " << ptr << endl;

    return 0;
}