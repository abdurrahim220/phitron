#include <stdio.h>
#include <string.h>
#define ARR 100001
int main()
{
    char s[ARR];
    fgets(s, ARR, stdin);
    int i=0;
    while (s[i] != '\\')

    {
        printf("%c", s[i]);
        i++;
    }

    return 0;
}