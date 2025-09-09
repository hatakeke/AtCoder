#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;

    priority_queue<int, vector<int>, greater<int>> balls;

    for (int i = 0; i < q; i++) {
        int s;
        cin >> s;
        
        if (s == 1) {
            int x;
            cin >> x;
            balls.push(x);
        } else if (s == 2) {
            if (!balls.empty()) {
                cout << balls.top() << endl;
                balls.pop();
            }
        }
    }
}

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	int q;
// 	cin >> q;
// 	priority_queue<int, vector<int>, greater<>> pq;
// 	while (q--) {
// 		int type;
// 		cin >> type;
// 		if (type == 1) {
// 			int x;
// 			cin >> x;
// 			pq.push(x);
// 		}
// 		else {
// 			int x = pq.top(); pq.pop();
// 			cout << x << '\n';
// 		}
// 	}
// }
