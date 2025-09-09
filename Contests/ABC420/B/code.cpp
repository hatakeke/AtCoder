#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<string> S(N);
    for (int i = 0; i < N; i++) {
        cin >> S[i];
    }

    vector<int> human(N);
    for (int j = 0; j < M; j++) {
        int x = 0;
        int y = 0;
        for (int i = 0; i < N; i++) {
           if (S[i][j] == '0') x++; 
           if (S[i][j] == '1') y++; 
        }
        for (int i = 0; i < N; i++) {
            if (x < y) {
                if (S[i][j] == '0') human[i]++;
            } else if (x > y) {
                if (S[i][j] == '1') human[i]++;
            } else {
                human[i]++;
            }
        }
    }

    int max_point = 0;
    for (int i = 0; i < N; i++) {
        if (max_point < human[i]) max_point = human[i];
    }

    for (int i = 0; i < N; i++) {
        if (max_point == human[i]) {
            cout << i + 1 << " ";
        }
    }
    cout << endl;

    return 0;
}