#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    vector<int> v2 = {10, 20, 30, 40, 50};
    // vector<int> v3;
    // v3 = v; // copy assignment
    // v3 = v2; // copy assignment
    // for (auto it = v3.begin(); it != v3.end(); it++)
    v.insert(v.begin() + 2, v2.begin(), v2.end());
        // v.insert(v.begin() + 2, 10);
    for (auto x : v)
    {
        cout << x << " ";
    }

    return 0;
}