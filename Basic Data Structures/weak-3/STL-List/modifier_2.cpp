#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList = {10, 20, 30};
    // list<int> newList = {150, 250, 350};
    list<int> newList = {350, 350, 350};

    myList.push_back(40);
    myList.push_front(5);
    myList.insert(myList.begin(), 15);
    // myList.insert(next(myList.begin(),2), 150);
    // myList.pop_back();
    // myList.pop_back();
    // myList.pop_front();
    // myList.erase(next(myList.begin(), 2));
    // myList.insert(next(myList.begin(), 2), {150, 250, 350});
    myList.insert(next(myList.begin(), 2), newList.begin(), newList.end());
    // myList.erase(next(myList.begin(), 2), next(myList.begin(), 5));

    // replace(myList.begin(),myList.end(),350,100);
    // for (int val : myList)
    // {
    //     cout << val << endl;
    // }

    auto it = find(myList.begin(), myList.end(), 30);
    // if (it != myList.end())
    if (it == myList.end())
    {
        // myList.erase(it);
        // myList.replace(it, next(it, 1), {100, 200, 300});
        // myList.insert(it, {100, 200, 300});
        cout << "Not Found!!";
    }
    // for (int val : myList)
    else
    {
        // cout << val << endl;
        cout << "Found!!";
    }

    // cout << *it << endl;

    return 0;
}