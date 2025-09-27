#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;

    vector<int> A(N);
    vector<unsigned long long> sum(N+1);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
        sum[i+1] = sum[i] + A[i];
    }

    int index = 0;
    for (int i = 0; i < Q; i++) {
        int num;
        cin >> num;
        if (num == 1) {
            int c;
            cin >> c;
            if (c % N == 0) continue;
            index = c % N - 1;
            for (int k = N-1; k > 0; k--) {
                sum[k] = sum[k+1] - A[index--];
                if (index < 0) index = N - 1;
            }
        } else if (num == 2) {
            int l, r;
            cin >> l >> r;
            cout << sum[r] - sum[l-1] << endl;
        }
    }

    return 0;
}