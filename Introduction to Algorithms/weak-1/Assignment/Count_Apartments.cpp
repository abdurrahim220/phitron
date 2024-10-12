#include <bits/stdc++.h>
using namespace std;

const int MAX = 1000;
char building[MAX][MAX];
bool visited[MAX][MAX];
int n, m;

vector<pair<int, int>> dir = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

bool isValid(int x, int y)
{
    return (x >= 0 && x < n && y >= 0 && y < m && building[x][y] == '.' && !visited[x][y]);
}

void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    visited[si][sj] = true;

    while (!q.empty())
    {
        auto [x, y] = q.front();
        q.pop();

        for (auto [dx, dy] : dir)
        {
            int X = x + dx;
            int Y = y + dy;

            if (isValid(X, Y))
            {
                q.push({X, Y});
                visited[X][Y] = true;
            }
        }
    }
}

int countApartments()
{
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (building[i][j] == '.' && !visited[i][j])
            {
                bfs(i, j);
                cnt++;
            }
        }
    }

    return cnt;
}

int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> building[i][j];
        }
    }

    memset(visited, false, sizeof(visited));
    int apartments = countApartments();

    cout << apartments << endl;

    return 0;
}
