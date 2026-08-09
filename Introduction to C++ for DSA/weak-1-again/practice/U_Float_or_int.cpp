#include <bits/stdc++.h>
using namespace std;
int main()
{
    double n;
    cin >> n;
    int integer_part = (int)n;
    double fractional_part = n - integer_part;

    if (fractional_part == 0)
    {
        cout << "int " << integer_part << endl;
    }
    else
    {
        cout << "float " << integer_part << " " << fractional_part << endl;
    }

    return 0;
}