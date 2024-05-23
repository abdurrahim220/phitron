#include <stdio.h>
int main()
{
    int t, i;
    scanf("%d", &t);
    int n, max = 0;
    for (i = 1; i <= t; i++)
    {
        scanf("%d", &n);
        if (n > max)
        {
            max = n;
        }
    }
    printf("%d\n", max);
    return 0;
}