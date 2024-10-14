#include<bits/stdc++.h>

using namespace std;

int N, M;
vector<vector<int>> visited;
vector<string> matrix;

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

bool isValid(int x, int y) {
    return (x >= 0 && x < N && y >= 0 && y < M && matrix[x][y] == '.' && !visited[x][y]);
}

int bfs(int startX, int startY) {
    queue<pair<int, int>> q;
    q.push({startX, startY});
    visited[startX][startY] = 1;
    int area = 0;

    while (!q.empty()) {
        pair<int, int> cell = q.front();
        q.pop();
        area++;

        for (int i = 0; i < 4; i++) {
            int newX = cell.first + dx[i];
            int newY = cell.second + dy[i];

            if (isValid(newX, newY)) {
                visited[newX][newY] = 1;
                q.push({newX, newY});
            }
        }
    }

    return area;
}

int main() {
    cin >> N >> M;
    matrix.resize(N);
    visited.assign(N, vector<int>(M, 0));

    for (int i = 0; i < N; i++) {
        cin >> matrix[i];
    }

    int minArea = INT_MAX;
    bool foundComponent = false;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (matrix[i][j] == '.' && !visited[i][j]) {
                foundComponent = true;
                int area = bfs(i, j);
                minArea = min(minArea, area);
            }
        }
    }

    if (!foundComponent) {
        cout << -1 << endl;
    } else {
        cout << minArea << endl;
    }

    return 0;
}
