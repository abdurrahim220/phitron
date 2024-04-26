#include <stdio.h>
#include <string.h>
#define size 100001
int main()
{
    char s[size];
    scanf("%s", &s);
    // fgets(s,size,stdin);
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == ',')
        {
            s[i] = ' ';
        }
        else if (s[i] < 96)
        {
            s[i] += 32;
        }
        else if (s[i] > 96)
        {
            s[i] -= 32;
        }
    }

    printf("%s\n", s);

    return 0;
}