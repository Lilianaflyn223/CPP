#include <bits/stdc++.h>
using namespace std;

void solve (string n) {
    long long odd = 0, even = 0;
    for (int i = 0; i < n.size(); i++) {
        if (i % 2 == 0) {
            even += n[i] - '0';
        }
        else odd += n[i] - '0';
    }
    if (abs(even - odd) % 11 == 0) {
        cout << "1\n";
    }
    else cout << "0\n";
}

int main () {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        solve(s);
    }
}