/*

You need to take two integer values as input and show the summation, subtraction, multiplication and division in the given format below.
For example:
Inputs are 5 and 2
Then you’ll give output as:
5 + 2 = 7
5 - 2 = 3
5 * 2 = 10
5 / 2 = 2.50

*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter two number : ";
    cin >> a >> b;
    cout << a << " + " << b << " = " << a + b << endl;
    cout << a << " - " << b << " = " << a - b << endl;
    cout << a << " * " << b << " = " << a * b << endl;
    cout << a << " / " << b << " = " << a / b << endl;
    return 0;
}