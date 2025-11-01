#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, A, B;
    cin >> N >> A >> B;
    string S;
    cin >> S;

    vector<int> num_a(N + 1);
    vector<int> num_b(N + 1);
    for (int i = 1; i < N + 1; i++) {
        if (S[i - 1] == 'a') {
            num_a[i] = num_a[i - 1] + 1;
            num_b[i] = num_b[i - 1];
        } else {
            num_a[i] = num_a[i - 1];
            num_b[i] = num_b[i - 1] + 1;
        }   
    }

    for (int i = 1; i < N + 1; i++) {
        if (num_a[i] < A) continue;
              
    }

    // cout << ans << endl;
    return 0;
}