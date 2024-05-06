#include <stdio.h>

void odd_even();
int main()
{

    odd_even();

    return 0;
}

void odd_even()
{
    int n;
    scanf("%d", &n);
    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int even = 0;
    int odd = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        if (arr[i] % 2 != 0)
        {
            odd++;
        }
    }
    printf("%d %d", even, odd);
}