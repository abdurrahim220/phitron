#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, i;
    cin >> t;
    for (i = 1; i <= t; i++)
    {
        int a, b;
        int temp1 = 0;
        int temp2 = 0;
        cin >> a >> b;

        do
        {
            temp1 = (temp1 * 10) + (a % 10);
            a /= 10;
        } while (a != 0);
        do
        {
            temp2 = (temp2 * 10) + (b % 10);
            b /= 10;
        } while (b != 0);

        if (temp1 > temp2)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}