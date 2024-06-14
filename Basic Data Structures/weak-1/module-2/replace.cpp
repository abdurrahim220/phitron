#include <bits/stdc++.h>
using namespace std;
// int main()
// {

//     // replace
//     vector<int> v = {1, 2, 2, 3, 4, 3, 2, 1, 5, 2, 2, 3, 2};

//     replace(v.begin(), v.end()-1, 2, 100);

//     for (auto x : v)
//     {
//         cout << x << " ";
//     }
//     return 0;
// }

int main()
{
    vector<int> v = {1, 2, 2, 3, 4, 3, 2, 1, 5, 2, 2, 3, 2, 30};

    // cout << find(v.begin(), v.end(), 3);

    // vector<int>::iterator it;
    auto it = find(v.begin(), v.end(), 30);
    if (it != v.end())
    {
        cout << "Element found at position " << it - v.begin() << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }

    // cout << *it;
}