#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> linkedList;
    set<int> inputList;

    int val;

    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        inputList.insert(val);
    }

    for (const int &val : inputList)
    {
        linkedList.push_back(val);
    }

    linkedList.sort();

    for (auto val : linkedList)
    {
        cout << val << " ";
    }

    return 0;
}