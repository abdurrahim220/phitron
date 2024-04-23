#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int i=0,j=n-1;
    while (i<j)
    {
       int temp=arr[i];
       arr[i]=arr[j];
       arr[j]=temp;
       i++;
       j--;
    }
    
    // for (i = n - 1; i >= 0; i--) //! without swap
    for (int i = 0; i <n; i++)
    {
        printf("%d\t", arr[i]);
    }
    return 0;
}