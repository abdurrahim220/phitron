#include <bits/stdc++.h>

using namespace std;

struct Edge {
    int from, to;
    long long weight;
};

const long long INF = LLONG_MAX;
int n, e;

bool bellman_ford(int source, vector<Edge>& edges, vector<long long>& dist) {
    dist.assign(n + 1, INF);
    dist[source] = 0;
    
    for (int i = 1; i <= n - 1; i++) {
        for (auto& edge : edges) {
            if (dist[edge.from] != INF && dist[edge.from] + edge.weight < dist[edge.to]) {
                dist[edge.to] = dist[edge.from] + edge.weight;
            }
        }
    }
    
    for (auto& edge : edges) {
        if (dist[edge.from] != INF && dist[edge.from] + edge.weight < dist[edge.to]) {
            return true;
        }
    }
    return false;
}

int main() {
    cin >>n >> e;
    
    vector<Edge> edges(e);
    for (int i = 0; i < e; i++) {
        cin >> edges[i].from >> edges[i].to >> edges[i].weight;
    }
    
    int s;
    cin >> s;
    
    vector<long long> dist;
    if (bellman_ford(s, edges, dist)) {
        cout << "Negative Cycle Detected" << endl;
        return 0;
    }
    
    int t;
    cin >> t;
    
    while (t--) {
        int d;
        cin >> d;
        
        if (dist[d] == INF) {
            cout << "Not Possible" << endl;
        } else {
            cout << dist[d] << endl;
        }
    }
    
    return 0;
}
