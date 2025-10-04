#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;

    // priority_queue<int, vector<int>, greater<int> > PC;
    vector<int> PC(N);
    for (int i = 0; i < N; i++) {
        PC[i] = i + 1; 
    }
    
    int old = 1;
    long sum = 0;
    for (int i = 0; i < Q; i++) {
        int X, Y, ans;
        cin >> X >> Y;

        ans = PC[X-1];
        for (int j = 0; j < Y; j++) {
            if (j < X) PC[j] = 0;
            else if (j < Y) PC[j] -= ans;
        }
        
        cout << ans << endl;
    }

    return 0;
}