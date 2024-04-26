#include <stdio.h>
#include <string.h>
#define arr 1001
int main()
{
    char s[arr], t[arr];
    scanf("%s %s", s, t);
    int y, z;
    y = strlen(s);
    z = strlen(t);
    printf("%d %d\n", y, z);
    printf("%s %s\n", s, t);
    return 0;
}