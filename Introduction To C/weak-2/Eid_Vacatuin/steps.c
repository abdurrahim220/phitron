#include <stdio.h>

int main()
{
    long long int x;
    scanf("%lld", &x);

    long long int steps = 0;

    while (x > 0)
    {

        if (x >= 3)
        {
            x -= 3;
        }

        else if (x >= 2)
        {
            x -= 2;
        }

        else if (x >= 1)
        {
            x -= 1;
        }

        steps++;
    }

    printf("%lld\n", steps);

    return 0;
}
