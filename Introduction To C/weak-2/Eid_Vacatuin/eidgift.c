#include <stdio.h>
int main()
{
    long long int n, x;
    int m, y;
    scanf("%lld %d", &n, &m);
    x = n / m;
    y = n % m;
    printf("%lld %d\n", x, y);

    return 0;
}