#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n;
    cin >> m;

    string s, t;
    cin >> s;
    cin >> t;

    vector<int> swap(n);

    for (int i = 0; i < m; i++) {
        int l, r;
        cin >> l;
        cin >> r;

        for (int j = l - 1; j < r; j++) {
            swap.at(j)++;
        }
    }

    for (int i = 0; i < n; i++) {
        if (swap.at(i) % 2 == 0) {
            cout << s[i];
        } else {
            cout << t[i];
        }
    }
    cout << endl;
}

// ロジックはいいが計算量が多い
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n, m;
//     cin >> n;
//     cin >> m;

//     string s, t;
//     cin >> s;
//     cin >> t;

//     for (int i = 0; i < m; i++) {
//         int l, r;
//         cin >> l;
//         cin >> r;

//         for (int j = l - 1; j < r; j++) {
//             char temp = s[j];
//             s[j] = t[j];
//             t[j] = temp;
//         }
//     }

//     cout << s << endl;
// }

// 模範解答
// N, M = map(int, input().split())
// s = input()
// t = input()
// cum = [0] * (N + 1)
// for _ in range(M):
//     l, r = map(int, input().split())
//     cum[l - 1] += 1
//     cum[r] -= 1
// for i in range(N):
//     cum[i + 1] += cum[i]
// ans = [s[i] if cum[i] % 2 == 0 else t[i] for i in range(N)]
// print("".join(ans))
