#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;
    vector<string> A(H)
    vector<int> start(2);
    vector<int> goal(2);

    for (int i = 0; i < H; i++) {
        cin >> A[i];
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