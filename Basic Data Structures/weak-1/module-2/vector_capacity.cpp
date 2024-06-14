#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;

    cout << v.capacity() << endl;
    v.push_back(10);
    cout << v.capacity() << endl;
    v.push_back(10);
    cout << v.capacity() << endl;
    v.push_back(10);
    cout << v.capacity() << endl;
    v.push_back(10);
    cout << v.capacity() << endl;
    v.push_back(10);
    cout << v.capacity() << endl;
    v.push_back(10);
    cout << v.capacity() << endl;
    v.push_back(10);
    cout << v.capacity() << endl;
    // v.clear();
    v.resize(10,5);
    cout << "size : " << v.size() << endl;
    int i = 0;
    while (i < v.size())
    {
        cout << v[i] << " ";
        i++;
    }
    cout << endl;

    return 0;
}