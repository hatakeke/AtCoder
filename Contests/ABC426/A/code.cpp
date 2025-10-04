#include <bits/stdc++.h>
using namespace std;

int main() {
    string X, Y, ans;
    cin >> X >> Y;
    
    ans = "Yes";
    if (Y == "Lynx" && X != "Lynx") {
        ans = "No";
    } else if (Y == "Serval" && X == "Ocelot") {
        ans = "No";
    }

    cout << ans << endl;
    return 0;
}