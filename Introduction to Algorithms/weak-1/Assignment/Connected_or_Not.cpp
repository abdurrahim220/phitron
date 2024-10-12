#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, e;
    cin >> n >> e;
    
    vector<vector<int>> mat(n, vector<int>(n, 0));
    
    for (int i = 0; i < e; i++) {
        int a, b;
        cin >> a >> b;
        mat[a][b] = 1;
    }

    int q;
    cin >> q;

    for (int i = 0; i < q; i++) {
        int a, b;
        cin >> a >> b;
        
        if (mat[a][b]) {
            cout << "YES" << endl;
        } else if (a == b) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
