#include <bits/stdc++.h>
using namespace std;

using namespace std;

int main()
{
    const int MAX_LENGTH = 100000 + 5;
    char line[MAX_LENGTH];
    char result[MAX_LENGTH];
    int result_index = 0;

    while (cin.getline(line, MAX_LENGTH))
    {
        int len = strlen(line);
        result_index = 0;
        for (int i = 0; i < len; ++i)
        {
            if (line[i] != ' ')
            {
                result[result_index++] = line[i];
            }
        }
        result[result_index] = '\0';

        sort(result, result + result_index);

        cout << result << endl;
    }

    return 0;
}
