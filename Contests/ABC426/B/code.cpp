#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;

    int N = S.size();
    for (int i = 1; i < N - 1; i++) {
        if (S[i] != S[i-1] && S[i] != S[i+1]) {
            cout << S[i] << endl;
            return 0;
        }
    }

    if (S[0] != S[1]) {
        cout << S[0] << endl;
        return 0;
    } else {
        cout << S[N-1] << endl;
        return 0;
    }
}