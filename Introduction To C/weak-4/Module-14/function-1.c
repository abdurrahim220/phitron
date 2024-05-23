#include <stdio.h>
//  Return + Parameter
int sum(int x, int y)
{
    return x+y;
}

int main()
{
    int y = sum(10,20);

    printf("%d",y);
    return 0;
}