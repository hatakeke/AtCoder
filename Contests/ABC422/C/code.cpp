#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        long long int A, B, C;
        cin >> A >> B >> C;

        unsigned long long int ans = 0;
        if (A > C) {
            if ((A - C + B) > C) {
                ans = C;
            } else {
                if (((A + C - 3 * B) / 3 + B) > (A - C + B)) {
                    ans = (A + C - 3 * B) / 3 + B;
                } else {
                    ans = A - C + B;
                }
            }
        } else {
            if ((C - A + B) > A) {
                ans = A;
            } else {
                if (((A + C - 3 * B) / 3 + B) > (C - A + B)) {
                    ans = (A + C - 3 * B) / 3 + B;
                } else {
                    ans = C - A + B;
                }
            }
        }

        cout << ans << endl;
    }
    
    return 0;
}