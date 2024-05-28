#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string line;

    while (getline(cin, line))
    {
        string word;
        string result;

        for (char c : line)
        {
            if (c == ' ')
            {
                if (!word.empty())
                {
                    sort(word.begin(), word.end());
                    result += word;
                    word.clear();
                }
            }
            else
            {
                word += c;
            }
        }

        if (!word.empty())
        {
            sort(word.begin(), word.end());
            result += word;
        }

        cout << result << endl;
    }

    return 0;
}
