#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)

    {
        char s[101];
        scanf("%s", s);

        int sz = strlen(s);

        if (sz > 10)
        {
            char first = s[0];
            char last = s[sz - 1];
            int middle_count = sz - 2;

            printf("%c%d%c\n", first, middle_count, last);
        }
        else
        {
            printf("%s\n", s);
        }
    }

    return 0;
}