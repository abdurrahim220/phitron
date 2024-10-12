#include <bits/stdc++.h>
using namespace std;

vector<int> v[1005];

int main() {
    int n, e;
    cin >> n >> e;

    while (e--) {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    int q;
    cin >> q;

    while (q--) {
        int src;
        cin >> src;

        vector<int> vr = v[src];
        
        if (vr.empty()) {
            cout << -1 << endl;
        } else {
            sort(vr.begin(), vr.end(), greater<int>());
            for (int child : vr) {
                cout << child << " ";
            }
            cout << endl;
        }
    }
    
    return 0;
}
