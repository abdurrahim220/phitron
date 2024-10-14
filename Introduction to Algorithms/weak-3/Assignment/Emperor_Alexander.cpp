#include <bits/stdc++.h>
using namespace std;
int n, e;
struct Edge
{
    int u, v, w;
};

bool cmp(const Edge &a, const Edge &b)
{
    return a.w < b.w;
}

int findP(int *parent, int node)
{
    if (parent[node] == node)
    {
        return node;
    }
    return parent[node] = findP(parent, parent[node]);
}

void unionNodes(int *parent, int *rank, int u, int v)
{
    int parentU = findP(parent, u);
    int parentV = findP(parent, v);

    if (rank[parentU] < rank[parentV])
    {
        parent[parentU] = parentV;
    }
    else if (rank[parentU] > rank[parentV])
    {
        parent[parentV] = parentU;
    }
    else
    {
        parent[parentV] = parentU;
        rank[parentU]++;
    }
}

pair<int, long long> kruskal(int n, vector<Edge> &edges)
{
    sort(edges.begin(), edges.end(), cmp);

    int *parent = new int[n + 1];
    int *rank = new int[n + 1];
    for (int i = 0; i <= n; i++)
    {
        parent[i] = i;
        rank[i] = 0;
    }

    long long mstCost = 0;
    int edgeCount = 0;

    for (const Edge &edge : edges)
    {
        int u = edge.u;
        int v = edge.v;
        int w = edge.w;

        if (findP(parent, u) != findP(parent, v))
        {
            mstCost += w;
            edgeCount++;
            unionNodes(parent, rank, u, v);

            if (edgeCount == n - 1)
            {
                break;
            }
        }
    }

    if (edgeCount < n - 1)
    {
        delete[] parent;
        delete[] rank;
        return make_pair(-1, -1);
    }

    int result = edges.size() - edgeCount;
    delete[] parent;
    delete[] rank;
    return make_pair(result, mstCost);
}

int main()
{

    cin >> n >> e;

    vector<Edge> edges(e);

    for (int i = 0; i < e; i++)
    {
        cin >> edges[i].u >> edges[i].v >> edges[i].w;
    }

    pair<int, long long> result = kruskal(n, edges);
    if (result.first == -1)

        cout << "Not Possible" << endl;

    else

        cout << result.first << " " << result.second << endl;

    return 0;
}
