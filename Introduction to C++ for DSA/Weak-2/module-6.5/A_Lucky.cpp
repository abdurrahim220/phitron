#include <iostream>
using namespace std;

bool isLuckyTicket(const string& ticket) {
    int sum1 = ticket[0] + ticket[1] + ticket[2] - 3 * '0';
    int sum2 = ticket[3] + ticket[4] + ticket[5] - 3 * '0';
    return sum1 == sum2;
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        string ticket;
        cin >> ticket;
        if (isLuckyTicket(ticket)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
