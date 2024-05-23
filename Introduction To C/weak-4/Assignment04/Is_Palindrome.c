#include <stdio.h>
#include <string.h>
int is_palindrome(char s[], int length);

int main()
{
    char s[1001];

    scanf("%s", s);
    int length = strlen(s);

    int ppp = is_palindrome(s, length);

    if (ppp == 1)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }

    return 0;
}

int is_palindrome(char s[], int length)
{
    int is_palindrome = 1;
    for (int i = 0; i < length / 2; i++)
    {
        if (s[i] != s[length - i - 1])
        {
            is_palindrome = 0;
            break;
        }
    }
    return is_palindrome;
}