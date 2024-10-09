#include <bits/stdc++.h>
using namespace std;

bool vis[20][20];
bool dis[20][20];
char ar[20][20];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

int n, m;

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
    {
        return false;
    }
    return true;
}

void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    dis[si][sj] = 0;
    while (!q.empty())
    {

        pair<int, int> par = q.front();
        int a = par.first, b = par.second;
        q.pop();
        cout << a << " " << b << endl;
        for (auto it : d)
        {
            int i = a + it.first;
            int j = b + it.second;
            if (valid(i, j) == true && vis[i][j] == false)
            {
                q.push({i, j});
                vis[i][j] = true;
                dis[i][j] = dis[a][b] + 1;
            }
        }
    }
}
int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> ar[i][j];
        }
    }
    int si, sj;
    cin >> si >> sj;
    memset(vis, false, sizeof(vis));
    memset(dis, -1, sizeof(dis));
    bfs(si, sj);
    return 0;
}