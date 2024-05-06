#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    long long int arr[t];
    int count1 = 0;
    int count2 = 0;
    for (int i = 0; i < t; i++)
    {
        scanf("%lld", &arr[i]);
        if (arr[i] % 2 == 0)
        {
            count1++;
        }
        else if (arr[i] % 3 == 0)
        {
            count2++;
        }
    }
    printf("%d %d",count1,count2);
    return 0;
}