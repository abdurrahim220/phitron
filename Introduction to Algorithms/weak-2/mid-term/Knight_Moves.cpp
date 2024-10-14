#include <bits/stdc++.h>

using namespace std;

struct Cell
{
    int x, y, dist;
};

int dx[] = {2, 2, -2, -2, 1, 1, -1, -1};
int dy[] = {1, -1, 1, -1, 2, -2, 2, -2};

bool isValid(int x, int y, int N, int M)
{
    return (x >= 0 && x < N && y >= 0 && y < M);
}

int bfs(int n, int m, int x, int y, int targetX, int targetY)
{
    vector<vector<int>> visited(n, vector<int>(m, 0));
    queue<Cell> q;
    q.push({x, y, 0});
    visited[x][y] = 1;

    while (!q.empty())
    {
        Cell cell = q.front();
        q.pop();

        if (cell.x == targetX && cell.y == targetY)
        {
            return cell.dist;
        }

        for (int i = 0; i < 8; i++)
        {
            int X = cell.x + dx[i];
            int Y = cell.y + dy[i];

            if (isValid(X, Y, n, m) && !visited[X][Y])
            {
                visited[X][Y] = 1;
                q.push({X, Y, cell.dist + 1});
            }
        }
    }
    return -1;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, m;
        cin >> n >> m;

        int x, y, targetX, targetY;
        cin >> x >> y >> targetX >> targetY;

        int result = bfs(n, m, x, y, targetX, targetY);
        if (result == -1)
            cout << "-1" << endl;
        else
            cout << result << endl;
    }
    return 0;
}
