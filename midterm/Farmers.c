#include <stdio.h>
#include <limits.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int m1, m2, d;
        scanf("%d %d %d", &m1, &m2, &d);

        int day = (m1 * d) / (m2 + m1);
        int work = d - day;

        printf("%d\n", work);
    }

    return 0;
}