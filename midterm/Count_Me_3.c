#include <stdio.h>
#include <string.h>
#define size 10001
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        char s[size];
        scanf("%s", s);
        int small = 0;
        int capital = 0;
        int digit = 0;
        
        for (int i = 0; i < strlen(s); i++)
        {
            if (s[i] >= 97)
            {
                small++;
            }
            else if (s[i] < 97 && s[i] >= 65)
            {
                capital++;
            }
            else
            {
                digit++;
            }
        }
        printf("%d %d %d\n", capital, small, digit);
    }

    return 0;
}