#include <bits/stdc++.h>
using namespace std;
int main()
{
    string input;
    while (getline(cin, input))
    {
        istringstream ss(input);
        string word1, word2;
        ss >> word1 >> word2;
        size_t i = 0,j=0;
        
        while (i < word1.size() && j < word2.size())
        {
            if (word1[i] == word2[j])
            {
                j++;
            }
            i++;
        }
        if (j == word2.size())
        {
            cout << "Possible" << endl;
        }
        else
        {
            cout << "Impossible" << endl;
        }
    }

    return 0;
}