#include <bits/stdc++.h>
using namespace std;

struct Edge {
    int to, weight;
};

vector<vector<Edge>> adj;
vector<long long> dist;

void dijkstra(int source, int N) {
    dist.assign(N + 1, LLONG_MAX);
    dist[source] = 0;
    
    priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> pq;
    pq.push({0, source});
    
    while (!pq.empty()) {
        long long d = pq.top().first;
        int node = pq.top().second;
        pq.pop();
        
        if (d > dist[node]) continue;
        
        for (Edge edge : adj[node]) {
            int next_node = edge.to;
            long long next_dist = d + edge.weight;
            
            if (next_dist < dist[next_node]) {
                dist[next_node] = next_dist;
                pq.push({next_dist, next_node});
            }
        }
    }
}

int main() {
    int N, E;
    cin >> N >> E;
    
    adj.resize(N + 1);
    
    for (int i = 0; i < E; i++) {
        int A, B, W;
        cin >> A >> B >> W;
        adj[A].push_back({B, W});
    }
    
    int S;
    cin >> S;
    
    dijkstra(S, N);
    
    int T;
    cin >> T;
    
    while (T--) {
        int D;
        long long DW;
        cin >> D >> DW;
        
        if (dist[D] <= DW) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
