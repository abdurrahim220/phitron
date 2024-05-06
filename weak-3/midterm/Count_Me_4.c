#include <stdio.h>
#include <string.h>
#define size 10001
int main()
{
    char s[size];
    scanf("%s", s);

    int count[26] = {0};

    for (int i = 0; i < strlen(s); i++)
    {
        int value = s[i] - 'a';
        count[value]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (count[i] != 0)
        {
            printf("%c - %d\n", 97 + i, count[i]);
        }
    }
    return 0;
}