#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    map<int, int> cnt;
    long ans = 0;
    for (int i = 0; i < N; ++i) {
        int A;
        cin >> A;

        ans += cnt[i - A];
        cnt[i + A]++;
    }
    cout << ans << endl;

    return 0;
}