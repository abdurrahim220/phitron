#include <bits/stdc++.h>
using namespace std;


void print_list(const list<int> &lst) {

    cout << "L -> ";
    
    for (auto it = lst.begin(); it != lst.end(); ++it) {
        
       cout << *it << " ";
        
    }
    
    cout << endl;
    

    cout << "R -> ";
    
    for (auto it = lst.rbegin(); it != lst.rend(); ++it)
    {
        
        cout << *it << " ";
        
    }
    
    cout << endl;
    
}


int main() {
    int t;
    cin >> t;
    list<int> dll;

while(t--) {
        int x, v;
        cin >> x >> v;

        if (x == 0) {
            
            dll.push_front(v);
        } else if (x == 1) {
          
            dll.push_back(v);
        } else if (x == 2) {
           
            if (v >= 0 && v < static_cast<int>(dll.size())) {
                auto it = dll.begin();
                advance(it, v);
                dll.erase(it);
            }
        }

        print_list(dll);
    }

    return 0;
}
