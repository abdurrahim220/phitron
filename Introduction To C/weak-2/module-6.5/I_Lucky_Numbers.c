#include <stdio.h>
int main()
{
    int a, b, temp1 = 0, temp2 = 0;
    scanf("%d", &a);

    temp1 = a % 10;
    temp2 = a / 10;
    if (temp1 % temp2 == 0)
    {
        printf("YES\n");
    }
    else if (temp2 % temp1 == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}