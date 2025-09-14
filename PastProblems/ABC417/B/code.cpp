#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < M; i++) {
        int B;
        cin >> B;

        for (int j = 0; j < N; j++) {
            if (A[j] == B) {
                A[j] = -1;
                break;
            }
        }
    }

   for (int i = 0; i < N; i++) {
        if (A[i] != -1) cout << A[i] << ' ';
    }
    cout << endl;

    return 0;
}