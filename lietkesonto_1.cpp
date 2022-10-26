#include <bits/stdc++.h>

using namespace std;

bool nto (int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return n > 1;
}

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i = 2; i <= n; i++) {
            if (nto(i)) cout << i << " ";
        }
        cout << endl;
    }
}