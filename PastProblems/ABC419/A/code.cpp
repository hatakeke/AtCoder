#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    string S;
    cin >> S;
    
    if (S == "red") {
        cout << "SSS" << endl;
    } else if (S == "blue") {
        cout << "FFF" << endl;
    } else if (S == "green") {
        cout << "MMM" << endl;
    } else { 
        cout << "Unknown" << endl;
    }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	string s;
// 	cin >> s;
// 	if (s == "red") cout << "SSS\n";
// 	else if (s == "blue") cout << "FFF\n";
// 	else if (s == "green") cout << "MMM\n";
// 	else cout << "Unknown\n";
// }
