#include <bits/stdc++.h>

using namespace std;

int solve (int n, int k) {
    int cnt = 0;
    for (int i = 2; i <= sqrt(n); i++) {
        while (n % i == 0) {
            n /= i;
            ++cnt;
            if (cnt == k) return i;
        }
    }
    if (n != 1) ++cnt;
    if (cnt == k) return n;
    return -1;
}

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        cout << solve(n, k);
        cout << endl;
    }
}