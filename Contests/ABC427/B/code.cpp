#include <bits/stdc++.h>
using namespace std;

long func(int x) {
    long order1000 = x / 1000;
    long order100 = (x - 1000 * order1000) / 100;
    long order10 = (x - 1000 * order1000 - 100 * order100) / 10;
    long order1 = (x - 1000 * order1000 - 100 * order100 - 10 * order10) / 1;

    return (order1 + order10 + order100 + order1000);
}

int main() {
    int N;
    cin >> N;

    long ans = 1;
    for (int i = 1; i < N; i++) {
        ans += func(ans);
    }

    cout << ans << endl;
    return 0;
}