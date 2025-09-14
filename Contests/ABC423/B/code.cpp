#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> L(N);
    for (int i = 0; i < N; i++) {
        cin >> L[i];
    }

    int rooms = N - 1;
    for (int i = 0; i < N; i++) {
        if (L[i] == 0) {
            rooms--;
        } else {
            break;
        }
    }
    for (int i = 1; i < N; i++) {
        if (L[N - i] == 0) {
            rooms--;
        } else {
            break;
        }
    }
    if (rooms < 0) {
        rooms = 0;
    }

    cout << rooms << endl;
    
    return 0;
}