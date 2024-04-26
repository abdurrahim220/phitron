#include <stdio.h>
#include<string.h>
int main()
{
    // char a[5] = {10, 20, 30, 40, 50};
    char a[5] = "Rahim";
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%c\t", a[i]);
    // }
    int sz = sizeof(a) / sizeof(char);
    printf("%s\t", a);
    printf("%d\t", sz);

    return 0;
}