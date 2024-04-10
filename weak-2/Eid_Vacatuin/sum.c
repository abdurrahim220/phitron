#include <stdio.h>
int main()
{
    long long i, n, sum = 0;
    scanf("%lld", &n);
    for (i = 0; i <= n; i++)
    {
        sum += i;
    }
    printf("%lld\n", sum);
    return 0;
}