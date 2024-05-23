#include <stdio.h>
#include <string.h>
#define ARR 1000001
int main()
{
    char s[ARR];
    scanf("%s", s);
    int sum = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        sum += (s[i] - '0');
    }
    printf("%d\n", sum);
    return 0;
}