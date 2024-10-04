#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> mp;
    mp.insert({"sakib al hasan", 75});
    mp.insert({"tamim iqbal", 19});
    mp.insert({"shamim", 55});

    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
    // cout<<mp["akib"]<<endl;

    if (mp.count("akib"))
    {
        cout << "Ace" << endl;
    }
    else
    {
        cout << "Not found" << endl;
    }
    return 0;
}