#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
bool vis[N];
vector<int> adj[N];
int pathVisit[N];
bool ans;

void dfs(int parent)
{
    vis[parent] = true;
    pathVisit[parent] = true;

    for (auto child : adj[parent])
    {
        if (pathVisit[child])
        {
            ans = true;
        }
        if (!vis[child])
        {
            dfs(child);
        }
    }
    pathVisit[parent] = false;
}

int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
    }
    memset(vis, false, sizeof(vis));
    memset(pathVisit, -1, sizeof(pathVisit));
    ans = false;
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            dfs(i);
        }
    }

    if (ans)
    {
        cout << "Cycle Found!!";
    }
    else
    {
        cout << "Cycle not Found!";
    }

    return 0;
}