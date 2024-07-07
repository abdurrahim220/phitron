#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList = {20, 30, 40, 50, 10, 10, 20};
    // myList.remove(10);
    myList.sort();
    // myList.sort(greater<int>());
    // myList.unique();
    myList.reverse();
    for (int val : myList)
    {
        cout << val << endl;
    }
    return 0;
}