#include <bits/stdc++.h>
using namespace std;

int main() {
    long a, b, c;
    cin >> a >> b >> c;
    
    if (a == b || b == c || c == a) {
        cout << "Yes" << endl;
        return 0;
    } 

    cout << "No" << endl;
    return 0;
}