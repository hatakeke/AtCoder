#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    int sum = 0;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
        sum += A[i];
    }

    for (int i = 0; i < N; i++) {
        if (A[i] == sum - M) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}