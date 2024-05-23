#include <stdio.h>
#include <string.h>
int main()
{
    char a[18];
    fgets(a, 18, stdin);
    printf("%s\n", a);
    return 0;
}