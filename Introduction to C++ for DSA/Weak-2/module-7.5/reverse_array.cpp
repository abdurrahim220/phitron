#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
};

int main()
{
    int n;
    cin >> n;
    Student s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i].name >> s[i].roll >> s[i].marks;
    }

    // reverse(s, s + n);
    Student reversedArray[n];

    // Copy elements in reverse order
    for (int i = 0; i < n; i++)
    {
        reversedArray[i] = s[n - i - 1];
    }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << s[i].name << " " << s[i].roll << " " << s[i].marks << endl;
    // }
    for (int i = 0; i < n; i++)
    {
        cout << reversedArray[i].name << " " << reversedArray[i].roll << " " << reversedArray[i].marks << endl;
    }

    return 0;
}