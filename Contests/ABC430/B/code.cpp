#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<vector<char>> maingrid(N, vector<char>(N));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> maingrid[i][j];
        }
    }

    int ans = 0;
    vector<string> subgrids;
    for (int i = 0; i < N - M + 1; i++) {
        for (int j = 0; j < N - M + 1; j++) {
            string subgrid;
            for (int ii = 0; ii < M; ii++) {
                for (int jj = 0; jj < M; jj++) {
                    subgrid.push_back(maingrid[i + ii][j + jj]);
                }
            }
            bool flag = false;
            for (string s : subgrids) {
                if (s == subgrid) {
                    flag = true;
                    break;
                } 
            }
            if (!flag) {
                ans++;
                subgrids.push_back(subgrid);
            }
        }
    }

    cout << ans << endl;
    return 0;
}