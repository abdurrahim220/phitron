// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     string s;
//     getline(cin, s);

//     stringstream ss(s);
//     string word;
//     while (ss >> word)
//     {
//         reverse(word.begin(), word.end());
//         cout << word << ' ';
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

void reverseString(string &text, int s, int e)
{
    while (s < e)
    {
        swap(text[s], text[e]);
        s++;
        e--;
    }
}

int main()
{
    string s;
    getline(cin, s);

    stringstream ss(s);
    string word;
    bool firstWord = true;

    while (ss >> word)
    {
        reverseString(word, 0, word.length() - 1);
        if (!firstWord)
        {
            cout << ' ';
        }
        cout << word;
        firstWord = false;
    }

    return 0;
}
