#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;

    vector<string> S(H);
    for (int i = 0; i < H; i++) {
        cin >> S[i];
    }

    bool flag = true;
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (S[i][j] == '.') continue;

            int cnt = 0;
            if ((i != 0) && (S[i-1][j] == '#')) cnt++;
            if ((j != 0) && (S[i][j-1] == '#')) cnt++;
            if ((j != W-1) && (S[i][j+1] == '#')) cnt++;
            if ((i != H-1) && (S[i+1][j] == '#')) cnt++;

            if ((cnt != 2) && (cnt != 4)) {
                flag = false;
                break;
            } 
        }
    }

    if (flag) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}