#include <bits/stdc++.h>

using namespace std;
int N, W;
int knapsack(int N, int W, vector<int> w, vector<int> v)
{
    vector<vector<int>> dp(N + 1, vector<int>(W + 1, 0));

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= W; j++)
        {
            if (w[i - 1] <= j)
            {
                dp[i][j] = max(dp[i - 1][j], v[i - 1] + dp[i - 1][j - w[i - 1]]);
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    return dp[N][W];
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        cin >> N >> W;

        vector<int> w(N), v(N);
        for (int i = 0; i < N; i++)
        {
            cin >> w[i];
        }
        for (int i = 0; i < N; i++)
        {
            cin >> v[i];
        }

        cout << knapsack(N, W, w, v) << endl;
    }

    return 0;
}
