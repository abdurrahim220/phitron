#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n][n];
    int product[n];

    for (int i = 0; i < n; i++)
    {
        product[i] = 1;
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
        for (int j = 1; j < n; j++)
        {
            product[i] *= arr[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i][0] % product[i] == 0)
        {
            printf("%d\n", arr[i][0] / product[i]);
        }
        else
        {
            printf("-1\n");
        }
    }

    return 0;
}
