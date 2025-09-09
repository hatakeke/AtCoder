#include <bits/stdc++.h>
using namespace std;

int main() {
    string X, Y;
    cin >> X >> Y;

    vector<long long int> a(10);
    a[0] = stoi(X);
    a[1] = stoi(Y);
    for (int i = 2; i < 10; i++) {
        string sum = to_string(a[i - 1] + a[i - 2]);
        reverse(sum.begin(), sum.end());
        a[i] = stol(sum);
    }

    cout << a[9] << endl;

    return 0;
}