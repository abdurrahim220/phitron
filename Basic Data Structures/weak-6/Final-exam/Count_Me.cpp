#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();

    while (n--) {
        string sentence;
        getline(cin, sentence); 
        
        unordered_map<string, int> freqMap; 
        int maxCount = 0;
        string resultWord;

        stringstream ss(sentence);
        string word;
        
    
        while (ss >> word) {
            freqMap[word]++;
           
            if (freqMap[word] > maxCount) {
                maxCount = freqMap[word];
                resultWord = word; 
            } else if (freqMap[word] == maxCount && resultWord != word) {
               
            }
        }
        cout << resultWord << " " << maxCount << endl;
    }

    return 0;
}
