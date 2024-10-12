#include <bits/stdc++.h>
using namespace std;

const int MAX = 1000;
char building[MAX][MAX];
bool visited[MAX][MAX];
int n, m;

vector<pair<int, int>> dir = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

bool isValid(int x, int y) {
    return (x >= 0 && x < n && y >= 0 && y < m && building[x][y] == '.' && !visited[x][y]);
}

int bfs(int X, int Y) {
    queue<pair<int, int>> q;
    q.push({X, Y});
    visited[X][Y] = true;
    int roomCount = 0;

    while (!q.empty()) {
        auto [x, y] = q.front();
        q.pop();
        roomCount++;

        for (auto [dx, dy] : dir) {
            int X = x + dx;
            int Y = y + dy;

            if (isValid(X, Y)) {
                q.push({X, Y});
                visited[X][Y] = true;
            }
        }
    }

    return roomCount;
}

vector<int> countRoomsInApartments() {
    vector<int> apartmentRoomCounts;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (building[i][j] == '.' && !visited[i][j]) {
                int roomCount = bfs(i, j);
                apartmentRoomCounts.push_back(roomCount);
            }
        }
    }

    return apartmentRoomCounts;
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> building[i][j];
        }
    }

    memset(visited, false, sizeof(visited));
    vector<int> apartments = countRoomsInApartments();

    if (apartments.empty()) {
        cout << 0 << endl;
    } else {
        sort(apartments.begin(), apartments.end());
        for (int count : apartments) {
            cout << count << " ";
        }
        cout << endl;
    }

    return 0;
}
