#include <stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    int arr[n];
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int neg = 0;
    int pos = 0;
    for (i = 1; i <= n; i++)
    {
        if (arr[i] < 0)
        {
            neg += arr[i];
        }
        else
        {
            pos += arr[i];
        }
        }

    printf("%d %d", pos, neg);

    return 0;
}