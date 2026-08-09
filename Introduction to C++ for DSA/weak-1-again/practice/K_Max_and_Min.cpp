#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a, b, c;
    cin >> a >> b >> c;
    long long int max_val = std::max({a, b, c});
    long long int min_val = std::min({a, b, c});
    cout << min_val << " " << max_val << endl;
    return 0;
}