#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, c;
    char s;
    cin >> a >> s >> c;
    
    if ((s == '<' && a < c) || (s == '>' && a > c) || (s == '=' && a == c)) {
        cout << "Right" << endl;
    } else {
        cout << "Wrong" << endl;
    }
    
    return 0;
}
