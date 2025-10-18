#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;
    
    int L = S.size();
    for (int i = 0; i < L; i++) {
        if (i != L / 2) {
            cout << S[i];
        }
    }

    cout << endl;
    return 0;
}