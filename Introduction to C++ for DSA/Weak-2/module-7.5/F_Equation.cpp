#include <iostream>
using namespace std;

void sum(int x, int n) {
    int total_sum = 0;
    
    for (int i = 0; i <= n; i += 2) {
        int term = 1;  // This will store x^i
        
        // Manually compute x^i
        for (int j = 0; j < i; ++j) {
            term *= x;
        }
        
        if (i == 0) {
            total_sum += (term - 1);
        } else {
            total_sum += term;
        }
    }
    
    cout << total_sum << endl;
}

int main() {
    int x, n;
    cin >> x >> n;

    sum(x, n);

    return 0;
}
