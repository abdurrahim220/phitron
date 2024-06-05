#include <iostream>
using namespace std;

int sum_of_digits(int num)
{
    int sum = 0;
    while (num > 0)
    {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    int total_sum = 0;

    for (int i = 1; i <= n; i++)
    {
        int digit_sum = sum_of_digits(i);

        if (digit_sum >= a && digit_sum <= b)
        {
            total_sum += i;
        }
    }

    // Print the result
    cout << total_sum << endl;
    return 0;
}
