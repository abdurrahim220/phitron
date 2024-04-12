#include <bits/stdc++.h>
using namespace std;
// int main()
// {
//     // char str[100];
//     string str;
//     // cout << "Enter a string = ";
//     // cin >> str;
//     // cout << "You entered: " << str << endl;
//     cout << "Enter another string = ";
//     // cin.get(str, 100);
//     getline(cin, str);
//     cout << "You entered : " << str << endl;
//     return 0;
// }

int main()
{
    // ? method 1 & 2
    string str = "GeeksForGeeks";
    cout << str.size() << endl;
    cout << str.length() << endl;
    cout << strlen(str.c_str()) << endl;

    int i = 0;
    while (str[i])
    {
        i++;
    }
    cout << i << endl;
    char st[50];
    int len;
    getchar(str);
}