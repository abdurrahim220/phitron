#include <stdio.h>
int main()
{
    int n, temp = 0;
    scanf("%d",&n);

    while (n != 0)
    {
        temp = (temp * 10) + (n % 10);
        n /= 10;
    }

    printf("%d\n", temp);
    return 0;
}