#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int B, ans;
    for (int j = 0; j < Q; j++) {
        cin >> B;

        cout << ans << endl;
    }
    return 0;
}