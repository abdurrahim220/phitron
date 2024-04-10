#include <stdio.h>
int main()
{
    int x, y;
    scanf("%d%d", &x, &y);
    // int z = x - y;
    // int rina = z / 2;
    // int mina = rina + y;
    int mina = ((x + y) / 2);
    int rina = mina - y;
    printf("%d %d\n", mina, rina);
    return 0;
}