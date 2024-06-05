#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int current = 1;
    for (int i = 0; i < n; i++)
    {
        cout << current << " " << current + 1 << " " << current + 2 << " PUM" << endl;
        current += 4;
    }

    return 0;
}
