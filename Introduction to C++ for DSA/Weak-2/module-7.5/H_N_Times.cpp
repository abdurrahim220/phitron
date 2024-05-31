#include <bits/stdc++.h>
using namespace std;

void printChar(int n, char c) {
    for (int i = 0; i < n; ++i) {
        if (i > 0) {
            cout << " ";
        }
        cout << c;
    }
    cout << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        char c;
        cin >> n >> c;
        printChar(n, c);
    }
    return 0;
}
