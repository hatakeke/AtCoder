#include <bits/stdc++.h>
using namespace std;

bool good(string str) {
    int N = str.size();
    for (int i = 0; i < Q; i++) {
        if (S[i] == ')') {
            return false;
        } else {
            
        }
    }

    if (S[0] == ')' || S[N-1] == '(') {
        return false;
    } else {
        good(S(i, N));
    }
}

int main() {
    int Q;
    cin >> Q;

    string S = "";
    for (int i = 0; i < Q; i++) {
        int num;
        cin >> num;
        
        if (num == 1) {
            char c;
            cin >> c;
            S.push_back(c);
        } else if (S.size() <= 1) {
            S = "";
        } else {
            S.pop_back();
        }

        int N = S.size();
        if (N < 2 || S[0] != '(' || S[N-1] != ')') {
            cout << "No" << endl;
        } else {
            cout << "Yes" << endl;
        }
    }

    return 0;
}