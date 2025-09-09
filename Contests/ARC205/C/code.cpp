#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    string S;
    cin >> N >> S;

    char left = S[0];
    int n = 1;
    int cnt = 0;
    for (int i = 1; i < 2 * N; i++) {
        if (S[i] == left) {
            cnt += abs(2 * n - i);
            n++;
        }
    } 
    
    cout << cnt << endl;

    return 0;
}