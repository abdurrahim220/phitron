#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;
    stack<int> s;
    int n, n1;

    // Input queue
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    // Input stack
    cin >> n1;
    for (int i = 0; i < n1; i++)
    {
        int x;
        cin >> x;
        s.push(x);
    }

    // Check if the sizes are different
    if (n != n1)
    {
        cout << "NO" << endl;
        return 0;
    }

    // Compare elements
    bool isEqual = true;
    while (!q.empty() && !s.empty())
    {
        if (q.front() != s.top())
        {
            isEqual = false;
            break;
        }
        q.pop();
        s.pop();
    }

    // Check if both are empty and isEqual is still true
    if (isEqual && q.empty() && s.empty())
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
      // while (!q.empty())
    // {
    //     cout << q.front() << " ";
    //     q.pop();
    // }
    // cout << endl;
    // while (!s.empty())
    // {
    //     cout << s.top() << " ";
    //     s.pop();
    // }

    return 0;
}
