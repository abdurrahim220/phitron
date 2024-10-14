#include <bits/stdc++.h>
using namespace std;
const int N = 100;
vector<pair<int, int>> v[N];
int dis[N];


class cmp
{
public:
    bool operator()(pair<int, int> a, pair<int, int> b)
    {
        return a.second < b.second;
    }
};


void dijkstra(int src)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>,cmp> pq;
    pq.push({src, 0});
    dis[src] = 0;
    while (!pq.empty())
    {
        pair<int, int> parent = pq.top();
        pq.pop();
        int node = parent.first;
        int cost = parent.second;
        for (pair<int, int> child : v[node])
        {
            int child_node = child.first;
            int child_cost = child.second;
            if (dis[child_node] > cost + child_cost)
            {
                // path relax
                dis[child_node] = cost + child_cost;
                pq.push({child_node, dis[child_node]});
            }
        }
    }
}





int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        v[a].push_back({b, c});
        v[b].push_back({a, c});
    }
    // memset(dis, INT_MAX, sizeof(dis));
    for (int i = 0; i < n; i++)
    {
        dis[i] = INT_MAX;
    }
    dijkstra(0);

    for (int i = 0; i < n; i++)
    {
        cout << i << " -> " << dis[i] << endl;
    }
    return 0;
}