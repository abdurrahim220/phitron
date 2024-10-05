#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, e;
    cin >> n >> e;
    vector<int> mat[n];
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        mat[a].push_back(b);
        mat[b].push_back(a);
    }
    vector<int> v;
    // for(int x:v){
    for (int x : mat[0])
    {
    }
    for (int i = 0; i < mat[0].size(); i++)
    {
        int x = mat[0][i];
        cout << x << " ";
    }

    return 0;
}