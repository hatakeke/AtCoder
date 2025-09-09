#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;

    long double ans = 0.0;

    for (int i = 0; i < S.size(); i++) {
        if (S[i] != 't') continue;

        for (int j = i + 2; j < S.size(); j++) {
            if (S[j] != 't') continue;

            int x = 0;
            for (int k = i; k < j + 1; k++) {
                if (S[k] == 't') x++;
            }

            long double v = (long double)(x - 2) / (long double)(j - i + 1 - 2); 
            if (v > ans) ans = v;
        }
    }

    cout << fixed << setprecision(17) << ans << endl;

    return 0;
}