#include <bits/stdc++.h>
using namespace std;

int vis = 100001;
bool canReach(int N)
{
    if (N == 1)
        return true;

    queue<int> q;
    bool visited[vis] = {false};

    q.push(1);
    visited[1] = true;

    while (!q.empty())
    {
        int cur = q.front();
        q.pop();

        int add = cur + 3;
        if (add == N)
            return true;
        if (add <= N && !visited[add])
        {
            q.push(add);
            visited[add] = true;
        }

        int mul = cur * 2;
        if (mul == N)
            return true;
        if (mul <= N && !visited[mul])
        {
            q.push(mul);
            visited[mul] = true;
        }
    }

    return false;
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;
        if (canReach(N))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
