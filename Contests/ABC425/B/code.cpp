#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N ;

    vector<int> list;
    for (int i = 1; i <= N; i++) {
        list.push_back(i);
    }

    vector<int> A(N);
    vector<int> P(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];

        if (A[i] != -1) {
            P[i] = A[i];
            list.erase(remove(list.begin(), list.end(), A[i]), list.end());
        }
    }

    for (int i = 0; i < N; i++) {
        if (P[i] == 0) {
            P[i] = list.front();
            list.erase(remove(list.begin(), list.end(), P[i]), list.end());
        }
    }
    if (list.empty()) {
        cout << "Yes" << endl;
        for (int i = 0; i < N; i++) {
            cout << P[i] << " ";
        }
        cout << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}