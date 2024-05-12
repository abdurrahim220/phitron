#include <stdio.h>

int main()
{
    int test_cases;
    scanf("%d", &test_cases);

    
    for (int t = 0; t < test_cases; t++)
    {
        int n;
        scanf("%d", &n);
        char s[n + 1];

        int cnt[26] = {0};

        for (int i = 0; i < n; i++)
        {
            scanf(" %c", &s[i]);
            int value = s[i] - 'A';
            cnt[value]++;
        }
        s[n] = '\0';

        // Print counts of T and P
        int count_T = cnt['T' - 'A'];
        int count_P = cnt['P' - 'A'];

        // Compare counts of T and P
        if (count_T == count_P)
        {
            printf("Draw\n");
        }
        else if (count_T > count_P)
        {
            printf("Tiger\n");
        }
        else
        {
            printf("Pathaan\n");
        }
    }

    return 0;
}
