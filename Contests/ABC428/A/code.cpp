#include <bits/stdc++.h>
using namespace std;

int main() {
    int S, A, B, X;
    cin >> S >> A >> B >> X;
    
    int ans = 0;
    for (int i = 0; i < X; i++) {
        if (i % (A + B) < A) ans += S;
    }

    cout << ans << endl;
    return 0;
}