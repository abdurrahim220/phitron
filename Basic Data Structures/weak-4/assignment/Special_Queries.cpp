#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    queue<string> q;
    string output;

    while (t--) {
        int c;
        cin >> c;

        if (c == 0) {
            string name;
            cin >> name;
            q.push(name);
        } 
        else if (c == 1) {
            if (!q.empty()) {
                output += q.front() + "\n";
                q.pop();
            } else {
                output += "Invalid\n";
            }
        }
    }

    cout << output;

    return 0;
}
