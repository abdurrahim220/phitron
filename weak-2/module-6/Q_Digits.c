#include <stdio.h>
int main()
{
    int t, i;
    scanf("%d", &t);

    for (i = 1; i <= t; i++)
    {
        int n, temp = 0;
        scanf("%d", &n);
        do
        {
            printf("%d ", n % 10);
            n /= 10;
        } while (n != 0);
        printf("\n");
    }

    return 0;
}