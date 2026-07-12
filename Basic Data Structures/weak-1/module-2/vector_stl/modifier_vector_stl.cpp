#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> x = {1, 2, 3, 4, 5};
    //     vector<int> v = {10, 20, 30, 40, 50};
    // v=x;
    x.pop_back();
    for (int i = 0; i < x.size(); i++)
    {
        cout << x[i] << " ";
    };
    return 0;
};