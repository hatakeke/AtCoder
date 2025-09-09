#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    int r_max, r_min, c_max, c_min;
    r_max = c_max = -1;
    r_min = c_min = pow(10, 9);

    for (int i = 0; i < N; i++) {
        int r, c;
        cin >> r;
        cin >> c;
        if (r > r_max) r_max = r;
        if (r < r_min) r_min = r;
        if (c > c_max) c_max = c;
        if (c < c_min) c_min = c;
    }

    int time;
    if (r_max - r_min > c_max - c_min) {
        if ((r_max - r_min) % 2 == 0) {
            time = (r_max - r_min) / 2;
        } else {
            time = (r_max - r_min) / 2 + 1;
        }
    } else {
        if ((c_max - c_min) % 2 == 0) {
            time = (c_max - c_min) / 2;
        } else {
            time = (c_max - c_min) / 2 + 1;
        }
    }
    cout << time << endl;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	int n;
// 	cin >> n;
// 	vector<int> x(n), y(n);
// 	for (int i = 0; i < n; i++) cin >> x[i] >> y[i];
// 	int X = *max_element(x.begin(), x.end()) - *min_element(x.begin(), x.end());
// 	int Y = *max_element(y.begin(), y.end()) - *min_element(y.begin(), y.end());
// 	int ans = (max(X, Y) + 1) / 2;
// 	cout << ans << '\n';
// }
