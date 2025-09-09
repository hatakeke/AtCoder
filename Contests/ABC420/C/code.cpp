#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    vector<int> B(N);
    for (int i = 0; i < N; i++) {
        cin >> B[i];
    }

    int64_t sum = 0;
    for (int x = 0; x < N; x++) {
        sum += min(A[x], B[x]);
    }
    
    for (int i = 0; i < Q; i++) {
        char c;
        int X, V;
        cin >> c;
        cin >> X >> V;
        sum -= min(A[X - 1], B[X - 1]);
        if (c == 'A') {
            A[X - 1] = V;
        } else {
            B[X - 1] = V;
        } 
        sum += min(A[X - 1], B[X - 1]);
        cout << sum << endl;
    }

    return 0;
}