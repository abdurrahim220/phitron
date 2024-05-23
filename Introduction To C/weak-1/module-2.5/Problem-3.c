#include <stdio.h>
int main()
{
    int a;
    printf("Enter number: ");
    scanf("%d", &a);
    if (a % 2 == 0)
        printf("Even\n");
    else
        printf("Odd\n");
}