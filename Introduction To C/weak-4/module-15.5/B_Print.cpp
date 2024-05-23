#include <bits/stdc++.h>
using namespace std;

void num(int a);

int main()
{
    int n;
    cin >> n;
    num(n);
    return 0;
}

void num(int a)
{
    for (int i = 1; i <= a; i++)
    {
        printf("%d",i);
        if (i != a)
        {
            cout<<" ";
        }
        
    }
}