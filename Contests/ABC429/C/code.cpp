#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<unsigned long long> num(N);
    for (int i = 0; i < N; i++) {
        int A;
        cin >> A;
        num[A-1] += 1;
    }

    unsigned long long ans = 0;
    for (int i = 0; i < N; i++) {
        if (num[i] != 1) {
            ans += num[i] * (num[i] - 1) / 2 * (N - num[i]);
        }
    }

    cout << ans << endl;
    return 0;
}