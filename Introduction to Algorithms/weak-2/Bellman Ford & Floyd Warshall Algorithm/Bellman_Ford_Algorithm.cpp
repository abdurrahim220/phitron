#include <bits/stdc++.h>
using namespace std;

class Edge
{
public:
    int src, dest, weight;
    Edge(int s, int d, int w)
    {
        src = s;
        dest = d;
        weight = w;
    }
};

int main()
{
    int n, e;
    cin >> n >> e;
    vector<Edge> edgeList;
    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        edgeList.push_back(Edge(a, b, c));
    }

    for (Edge ed : edgeList)
    {
        cout << ed.src << " " << ed.dest << " " << ed.weight << endl;
    }
    return 0;
}