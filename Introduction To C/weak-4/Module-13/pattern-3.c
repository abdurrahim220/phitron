#include <stdio.h>
int main()
{
    int n, k, s = 0;
    scanf("%d", &n);
    k = 2 * n - 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < s; j++)
        {
            printf(" ");
        }

        for (int j = 0; j < k; j++)
        {
            printf("*");
        }
        k -= 2;
        s++;
        printf("\n");
    }

    return 0;
}