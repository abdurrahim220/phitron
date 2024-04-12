#include <stdio.h>
int main()
{
    int n, x, i;
    scanf("%d", &n);
    x = (n - 9) / 4;

    for (i = x; i < x + 8; i += 2)
    {
        printf("%d\t", i);
    }
    return 0;
}