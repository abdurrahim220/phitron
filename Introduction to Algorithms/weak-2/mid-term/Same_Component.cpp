#include <bits/stdc++.h>
using namespace std;


int N, M;
vector<vector<char>> grid;
vector<vector<bool>> visited;

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

bool isValid(int x, int y) {
    return (x >= 0 && x < N && y >= 0 && y < M && grid[x][y] == '.' && !visited[x][y]);
}

void dfs(int x, int y) {
    visited[x][y] = true;
    
    for (int i = 0; i < 4; i++) {
        int X = x + dx[i];
        int Y = y + dy[i];
        
        if (isValid(X, Y)) {
            dfs(X, Y);
        }
    }
}

int main() {
    cin >> N >> M;
    
    grid.resize(N, vector<char>(M));
    visited.resize(N, vector<bool>(M, false));
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> grid[i][j];
        }
    }
    
    int Si, Sj, Di, Dj;
    cin >> Si >> Sj >> Di >> Dj;
    
    dfs(Si, Sj);
    
    if (visited[Di][Dj]) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}
