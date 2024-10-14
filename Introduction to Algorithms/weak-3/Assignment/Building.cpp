#include <bits/stdc++.h>
using namespace std;

struct Edge
{
    int u, v, w;
};

bool compareEdges(const Edge &a, const Edge &b)
{
    return a.w < b.w;
}

int findParent(int *parent, int node)
{
    if (parent[node] == node)
    {
        return node;
    }
    return parent[node] = findParent(parent, parent[node]);
}

void unionNodes(int *parent, int *rank, int u, int v)
{
    int parentU = findParent(parent, u);
    int parentV = findParent(parent, v);

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

long long kruskal(int n, vector<Edge> &edges)
{

    sort(edges.begin(), edges.end(), compareEdges);

    // Initialize the disjoint set
    int *parent = new int[n + 1];
    int *rank = new int[n + 1];
    for (int i = 1; i <= n; i++)
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

        if (findParent(parent, u) != findParent(parent, v))
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
        return -1;
    }

    return mstCost;
}

int main()
{
    int n, e;
    cin >> n >> e;

    vector<Edge> edges(e);
    for (int i = 0; i < e; i++)
    {
        cin >> edges[i].u >> edges[i].v >> edges[i].w;
    }

    long long mstCost = kruskal(n, edges);
    cout << mstCost << endl;

    return 0;
}
