#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList = {10, 20, 30};
    // cout << myList.max_size();
    // cout << myList.size();
    // myList.clear();
    myList.resize(2);
    myList.resize(5,100);
    for (int val : myList)
    {
        cout << val << endl;
    }
    cout << endl;
    return 0;
}