#include <iostream>
#include <vector>

using namespace std;

int main() {

    int N, Q;
    cin >> N >> Q;

    vector<long long> A(N + 1); 
    for (int i = 1; i <= N; ++i) {
        cin >> A[i];
    }

    // Compute prefix sums
    vector<long long> prefixSum(N + 1, 0);
    for (int i = 1; i <= N; ++i) {
        prefixSum[i] = prefixSum[i - 1] + A[i];
    }

    // Answer each query
    for (int q = 0; q < Q; ++q) {
        int L, R;
        cin >> L >> R;
        long long sum = prefixSum[R] - prefixSum[L - 1];
        cout << sum << "\n";
    }

    return 0;
}
