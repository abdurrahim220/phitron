#include <bits/stdc++.h>
using namespace std;

class Pair {
public:
    string S;
    int I;
    Pair(string S, int I) {
        this->S = S;
        this->I = I;
    }
};


bool cmp(const Pair &a, const Pair &b) {
    if (a.S == b.S) {
        return a.I > b.I; 
    }
    return a.S < b.S;
}

int main() {
    int n;
    cin >> n;
    
    vector<Pair> pairs;
    
    for (int i = 0; i < n; i++) {
        string ss;
        int ii;
        cin >> ss >> ii;
        pairs.push_back(Pair(ss, ii));
    }

  
    sort(pairs.begin(), pairs.end(), cmp);

 
    for (const Pair &p : pairs) {
        cout << p.S << " " << p.I << endl;
    }

    return 0;
}
