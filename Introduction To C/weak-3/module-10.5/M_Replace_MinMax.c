#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int max = INT_MIN;
    int min = INT_MAX;
    int index1 = 0;
    int index2 = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] > max)
        {
            index1 = i;
        }
        if (arr[i] < min)
        {
            index2 = i;
        }
    }

    int temp = arr[index1];
    arr[index1] = arr[index2];
    arr[index2] = temp;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}