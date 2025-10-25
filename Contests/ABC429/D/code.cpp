#include <bits/stdc++.h>
using namespace std;

int main() {
    unsigned long long N, M, C;
    cin >> N >> M >> C;

    vector<unsigned long long> num(M);
    for (int i = 0; i < N; i++) {
        int A;
        cin >> A;
        num[A] += 1;   
    }

    unsigned long long ans = 0;
    for (unsigned long long i = 0; i < M; i++) {
        unsigned long long X = 0;
        unsigned long long j = i + 1;
        while (X < C) {
            if (j >= M) j = 0;
            X += num[j++];
        }
        ans += X;
    }

    cout << ans << endl;
    return 0;
}