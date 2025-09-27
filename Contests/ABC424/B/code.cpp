#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M, K;
    cin >> N >> M >> K;

    vector<int> human(N);
    for (int i = 0; i < K; i++) {
        int A, B;
        cin >> A >> B;

        human[A-1]++;
        if (human[A-1] == M) {
            cout << A << " ";
        }
    }
    cout << endl;
    
    return 0;
}