#include <stdio.h>
int main()
{
    int t, n, even = 0, odd = 0, positive = 0, negative = 0;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        scanf("%d", &n);
        if (n % 2 == 0)
        {
            even++;
            if (n < 0)
            {
                negative++;
            }
            else if (n > 0)
            {
                positive++;
            }
        }
        else if (n % 2 != 0)
        {
            odd++;
            if (n < 0)
            {
                negative++;
            }
            else if (n > 0)
            {
                positive++;
            }
        }
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n", even, odd, positive, negative);
    return 0;
}