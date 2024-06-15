#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int l, r;
        cin >> l >> r;
        long long int n = r - l + 1;
        long long int sum = n * (l + r) / 2;
        cout << sum << endl;
    }
    return 0;
}
