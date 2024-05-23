#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    
    int year = n / 365;

    int remainder = n % 365;

    int month = remainder / 30;

    int day = remainder % 30;

    cout << year << " years" << endl;
    cout << month << " months" << endl;
    cout << day << " days" << endl;
    return 0;
}