#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int x = 10;

    int *a = new int;
    *a = 10;
    cout << *a << endl;
    delete a;

    float *f= new float;
    *f = 10.5;
    cout << *f << endl;

    return 0;
}