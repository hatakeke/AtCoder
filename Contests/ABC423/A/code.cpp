#include <bits/stdc++.h>
using namespace std;

int main() {
    long X, C;
    cin >> X >> C;
    
    long ans = 1000 * X / (C + 1000);

    cout << ans / 1000 * 1000 << endl;
    return 0;
}