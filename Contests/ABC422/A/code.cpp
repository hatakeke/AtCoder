#include <bits/stdc++.h>
using namespace std;

int main() {
    int i, j;
    char _;
    cin >> i >> _ >> j;
    if (j == 8) {
        i++;
        j = 1;
    } else {
        j++;
    }

    cout << i << '-' << j << endl;
    return 0;
}