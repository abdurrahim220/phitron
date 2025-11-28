#include<bits/stdc++.h>
using namespace std;
  int N, M;
bool canRP(const vector<int>& mks, int N, int M) {
    int tar = 1000 - M;

    if (tar == 0) {

        return true;
    }

    
    vector<bool> dp(tar + 1, false);

    dp[0] = true; 

    for (int mk : mks) {

        for (int i = tar; i >= mk; --i) {

            if (dp[i - mk]) {
                dp[i] = true;
            }
        }
    }

    return dp[tar];
}

int main() {
    int T;
    cin >> T;

    while (T--) {
      

        cin >> N >> M;

        vector<int> mks(N);


        for (int i = 0; i < N; i++) {

            cin >> mks[i];

        }

        if (canRP(mks, N, M)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
