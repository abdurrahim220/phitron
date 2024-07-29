#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<string> addresses;
    unordered_map<string, list<string>::iterator> addressMap;
    string val;

    while (true)
    {
        cin >> val;
        if (val == "end")
        {
            break;
        }
        addresses.push_back(val);
    }

    auto it = addresses.begin();
    for (; it != addresses.end(); ++it)
    {
        addressMap[*it] = it;
    }

    int q;
    cin >> q;
    string command, address;
    auto current = addresses.begin();

    for (int i = 0; i < q; ++i)
    {
        cin >> command;
        if (command == "visit")
        {
            cin >> address;
            if (addressMap.find(address) != addressMap.end())
            {
                current = addressMap[address];
                cout << *current << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (command == "next")
        {
            if (next(current) != addresses.end())
            {
                current = next(current);
                cout << *current << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (command == "prev")
        {
            if (current != addresses.begin())
            {
                current = prev(current);
                cout << *current << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
    }

    return 0;
}
