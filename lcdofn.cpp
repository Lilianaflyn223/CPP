#include <bits/stdc++.h>

using namespace std;

long long BCNN (int n) {
    long long lcm = 1;
    for (long long i = 2; i <= n; i++) {
        lcm = i * lcm / __gcd(i,lcm);
    }
    return lcm;
}

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << BCNN(n) << endl;
    }
}