#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isElimination(string s) {
    stack<char> st;
    
    for (char c : s) {
        
        if (!st.empty() && st.top() == '0' && c == '1') {
            st.pop(); 
        } else {
            st.push(c); 
        }
    }

   
    return st.empty();
}

int main() {
    int t;
    cin >> t; 
    
    while (t--) {
        string s;
        cin >> s;
       
        if (isElimination(s)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
