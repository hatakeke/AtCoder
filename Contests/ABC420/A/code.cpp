#include <bits/stdc++.h>
using namespace std;

int main() {
    int X, Y, now;
    cin >> X >> Y;

    now = X + Y;
    if (now % 12 == 0) {
        cout << 12 << endl;
    } else {
        cout << now % 12 << endl;
    }
    return 0;
}