#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<bool> skill(N);
    vector<int> A(N);
    vector<int> B(N);
    int cnt = 0;
    for (int i = 0; i < N; i++) {
        cin >> A[i] >> B[i];
        if (A[i] == 0 && B[i] == 0) {
            skill[i] = true;
            cnt++;
        } 
    }

    vector<vector<int>> vec(N, vector<int> (N));
    for (int i = 0; i < N; i++) {
        if (skill[A[i] - 1] || skill[B[i] - 1]) {
            skill[i] = true;
            cnt++;
            for (int j = 0; j < N; j++) {
                if (vec[i][j]) {
                    skill[j] = true;
                    cnt++;
                }
            }
        } else {
            vec[A[i] - 1][i] = 1;
            vec[B[i] - 1][i] = 1;
        }
    }

    cout << cnt << endl;

    return 0;
}