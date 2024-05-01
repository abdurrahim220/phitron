#include <stdio.h>
#include <stdbool.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        long long int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%lld", &arr[i]);
        }

        long long int x;
        scanf("%lld", &x);

        int flag = 1;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] == x)
            {
                flag = 0;
                break;
            }
        }
        if (flag != 1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}