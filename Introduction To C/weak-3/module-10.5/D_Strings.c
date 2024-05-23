#include <stdio.h>
#include <string.h>
int main()
{
    char a[11], b[11];
    scanf("%s %s", a, b);
    int sz1, sz2;
    sz1 = strlen(a);
    sz2 = strlen(b);
    char c[22];
    strcpy(c, a);
    strcat(c, b);
    printf("%d %d\n", sz1, sz2);
    printf("%s\n", c);

    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;
    printf("%s %s\n", a, b);
    return 0;
}