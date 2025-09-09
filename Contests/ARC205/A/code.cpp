#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;

    vector<vector<char>> S(N, vector<char> (N));
    for (int r = 0; r < N; r++) {
        for (int c = 0; c < N; c++) {
            cin >> S[r][c];
        }
    }

    vector<vector<int>> ans(N, vector<int> (N));
    int cnt = 0;
    for (int r = 0; r < N; r++) {
        for (int c = 0; c < N; c++) {
            if (r != N-1 && c != N-1) {
                if ((S[r][c] == '.') &&
                    (S[r+1][c] == '.') &&
                    (S[r][c+1] == '.') &&
                    (S[r+1][c+1] == '.')) {
                    cnt++;
                }
                ans[r][c] = cnt;
                cout << ans[r][c];
            } else {
                ans[r][c] = cnt;
                cout << ans[r][c];
            }
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 0; i < Q; i++) {
        int U, D, L, R;
        cin >> U >> D >> L >> R;

        cout << ans[D-2][R-1] - ans[U-1][L-1]<< endl;
    }
    return 0;
}