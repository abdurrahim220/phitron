#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> x = {10, 20, 30, 40, 50, 200};
    vector<int> y = {60, 70, 80, 90, 100};
    y.pop_back();
    x = y; // O(1) O(n)
    cout << "After assignment" << endl;
    for (auto i : y)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}