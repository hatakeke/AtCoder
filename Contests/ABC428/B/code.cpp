#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    string S;
    cin >> S;

    vector<string> sub(N - K + 1);
    for (int i = 0; i < N - K + 1; i++) {
        sub[i] = S.substr(i, K);
    }
    sort(sub.begin(), sub.end());

    vector<int> num(N - K + 1);
    int num_max = 0;
    for (int i = 0; i < N - K + 1; i++) {
        num[i] = count(sub.begin(), sub.end(), sub[i]);
        if (num_max < num[i]) num_max = num[i];
    }

    cout << num_max << endl;
    for (int i = 0; i < N - K + 1; i++) {
        if (num[i] == num_max && sub[i-1] != sub[i]) cout << sub[i] << " ";
    }

    cout << endl;
    return 0;
}