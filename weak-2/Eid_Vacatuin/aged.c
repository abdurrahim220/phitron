#include <stdio.h>
int main()
{
    int n = 80, x = 5;
    int y = n % x;
    printf("%d", y);
    printf("%d\n", x * y);
    return 0;
}