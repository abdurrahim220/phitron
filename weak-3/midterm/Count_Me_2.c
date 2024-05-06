#include <stdio.h>
#include <string.h>
#define size 100001
int main()
{
    char s[size];
    scanf("%s", s);
    int count = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        
        if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u')
        {

            count++;
        }
    }
    printf("%d", count);

    return 0;
}