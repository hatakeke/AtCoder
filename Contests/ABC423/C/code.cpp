#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, R;
    cin >> N >> R;

    vector<int> L(N);
    int i_min = N;
    int i_max = 0;
    int num_lock = 0;
    for (int i = 0; i < N; i++) {
        cin >> L[i];
        if (L[i] == 0) {
            if (i < i_min) i_min = i;
            if (i > i_max) i_max = i;
        } else {
            num_lock++;
        }
    }

    int cnt = 0;

    if (i_min < R) {
        if (R < i_max) {
            for (int i = i_min; i <= i_max; i++) {
                if (L[i] == 1) cnt++;
                cnt++;
            }  
        } else {
            for (int i = R; i > i_min; i--) {
                if (L[i - 1] == 1) cnt++;
                cnt++;
            }
            if (R == i_max) cnt++;
        }
    } else {
        for (int i = R; i <= i_max; i++) {
            if (L[i] == 1) cnt++;
            cnt++;
        }
    }
    if (num_lock == N) cnt = 0;

    cout << cnt << endl;
    
    return 0;
}