#include <bits/stdc++.h>
using namespace std;

vector<int> adj[100005];
bool visited[100005];
int parent[100005];
int cycleEdgeCount = 0;

void bfs(int src) {
    queue<int> q;
    visited[src] = true;
    q.push(src);
    parent[src] = -1;

    while (!q.empty()) {
        int node = q.front();
        q.pop();

        for (int child : adj[node]) {
            if (!visited[child]) {
                visited[child] = true;
                parent[child] = node;
                q.push(child);
            } else if (child != parent[node]) {
                cycleEdgeCount++;
            }
        }
    }
}

int main() {
    int n, e;
    cin >> n >> e;

    for (int i = 0; i < e; ++i) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    fill(visited, visited + n + 1, false);

    for (int i = 1; i <= n; ++i) {
        if (!visited[i]) {
            bfs(i);
        }
    }

    cout << cycleEdgeCount / 2 << endl;

    return 0;
}
