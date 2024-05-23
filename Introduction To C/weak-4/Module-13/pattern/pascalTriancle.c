#include <stdio.h>
long long fact(int n);
int main()
{
    int n, s, k;
    scanf("%d", &n);
    long long term;
    s = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            printf("%3c",' ');
        }
        for (int j = 1; j <= i; j++)
        {
            term = fact(i) / (fact(j) * fact(i - j));

            printf("%6lld", term);
        }
      
     
        printf("\n");
    }

    return 0;
}

long long fact(int n)
{
    long long factorial = 1ll;
    while (n >= 1)
    {
        factorial *= n;
        n--;
    }

    return factorial;
}