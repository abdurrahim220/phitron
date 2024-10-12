#include <bits/stdc++.h>
using namespace std;

const int MAX = 1005;
bool vis[MAX][MAX];
char ar[MAX][MAX];
vector<pair<int, int>> dir = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

int n, m;

bool isValid(int i, int j)
{
    return (i >= 0 && i < n && j >= 0 && j < m && ar[i][j] != '#' && !vis[i][j]);
}

bool bfs(int si, int sj, int ei, int ej)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;

    while (!q.empty())
    {
        auto [x, y] = q.front();
        q.pop();

        if (x == ei && y == ej)
            return true;

        for (auto [dx, dy] : dir)
        {
            int nx = x + dx;
            int ny = y + dy;
            if (isValid(nx, ny))
            {
                q.push({nx, ny});
                vis[nx][ny] = true;
            }
        }
    }
    return false;
}

int main()
{
    cin >> n >> m;
    pair<int, int> A, B;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> ar[i][j];
            if (ar[i][j] == 'A') A = {i, j};
            if (ar[i][j] == 'B') B = {i, j};
        }
    }

    memset(vis, false, sizeof(vis));

    if (bfs(A.first, A.second, B.first, B.second))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
