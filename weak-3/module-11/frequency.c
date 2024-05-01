#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int zero[7] = {0};
    for (int i = 0; i < n; i++)
    {
        zero[a[i]]++;
        // printf("%d ", a[i]);
    }
    for (int i = 0; i <= 6; i++)
    {
        printf("%d - %d\n", i, zero[i]);
    }

    return 0;
}