#include <bits/stdc++.h>


using namespace std;

bool canDC(const vector<int>& chocolates, int N) {
    int totalSum = 0;
    for (int chocolate : chocolates) {
        totalSum += chocolate;
    }

    
    if (totalSum % 2 != 0) {
        return false;
    }

    int target = totalSum / 2;
    vector<bool> dp(target + 1, false);
    dp[0] = true;  

    
    for (int chocolate : chocolates) {
        
        for (int i = target; i >= chocolate; --i) {
            if (dp[i - chocolate]) {
                dp[i] = true;
            }
        }
    }

    return dp[target];
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        vector<int> chocolates(N);

        for (int i = 0; i < N; i++) {
            cin >> chocolates[i];
        }

        if (canDC(chocolates, N)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
