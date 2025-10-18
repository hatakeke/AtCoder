#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    unsigned long long time = 0;
    long cos = 0;
    for (int i = 0; i < N; i++) {
        int A, B, C;
        cin >> A >> B >> C;
        
        if (cos + C < K) {
            time = A + B;
            cos = C;
            cout << A << endl;
        }
    }

    return 0;
}