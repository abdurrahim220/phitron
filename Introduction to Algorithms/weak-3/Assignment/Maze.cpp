#include <bits/stdc++.h>

using namespace std;

int dx[] = {0, 0, -1, 1};

int dy[] = {1, -1, 0, 0};

int N, M;
struct pos
{
    int x, y;
};

bool bfs(vector<vector<char>> &maze, int N, int M, pos start)
{
    queue<pos> q;
    vector<vector<bool>> visited(N, vector<bool>(M, false));
    vector<vector<pos>> parent(N, vector<pos>(M, {-1, -1}));

    q.push(start);
    visited[start.x][start.y] = true;

    pos exit_pos = {-1, -1};

    while (!q.empty())
    {
        pos curr = q.front();
        q.pop();

        if (maze[curr.x][curr.y] == 'D')
        {
            exit_pos = curr;
            break;
        }

        for (int i = 0; i < 4; ++i)
        {
            int nx = curr.x + dx[i];
            int ny = curr.y + dy[i];

            if (nx >= 0 && nx < N && ny >= 0 && ny < M && !visited[nx][ny] && (maze[nx][ny] == '.' || maze[nx][ny] == 'D'))
            {
                visited[nx][ny] = true;
                q.push({nx, ny});
                parent[nx][ny] = {curr.x, curr.y};
            }
        }
    }

    if (exit_pos.x == -1 && exit_pos.y == -1)
    {
        return false;
    }

    pos cur = exit_pos;
    while (cur.x != start.x || cur.y != start.y)
    {
        pos prev = parent[cur.x][cur.y];
        if (maze[prev.x][prev.y] == '.')
        {
            maze[prev.x][prev.y] = 'X';
        }
        cur = prev;
    }

    return true;
}

int main()
{
    cin >> N >> M;

    vector<vector<char>> maze(N, vector<char>(M));
    pos start;

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < M; ++j)
        {
            cin >> maze[i][j];
            if (maze[i][j] == 'R')
            {
                start = {i, j};
            }
        }
    }

    bfs(maze, N, M, start);

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < M; ++j)
        {
            cout << maze[i][j];
        }
        cout << endl;
    }

    return 0;
}
