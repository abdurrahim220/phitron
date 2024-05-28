#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Hello World";
    cout << s.size() << endl;
    cout << s.max_size() << endl;
    cout << s.capacity() << endl;
    s.clear();
    // cout << s.size() << endl;
    // cout << s.empty() << endl;

    if (s.empty() == true)
        cout << "empty!!" << endl;
    else
        cout << "not empty!!" << endl;

    return 0;
}