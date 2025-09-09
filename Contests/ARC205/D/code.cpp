#include <bits/stdc++.h>
using namespace std;

int main() {
    int Rt, Ct, Ra, Ca;
    cin >> Rt >> Ct >> Ra >> Ca;
    int N, M, L;
    cin >> N >> M >> L;

    do (int i = 0; i < N; i++) {
        char dir;
        int num;
        cin >> dir >> num;
        for (int j = 0; j < W; j++) {
            if (A[i][j] == 'S') {
                start[0] = i;
                start[1] = j;
            } else if (A[i][j] == 'G') {
                goal[0] = i;
                goal[1] = j;
            }
        }
    }
    return 0;
}