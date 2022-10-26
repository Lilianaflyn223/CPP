#include <bits/stdc++.h>

using namespace std;

bool prime (long long n) {
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return n > 1;
}

bool t_prime (long long n) {
    long long m = sqrt(n);
    if (m * m != n) return false;
    return prime(m);
}

int main () {
    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        long long cnt = 0;
        cin >> a >> b;
        for (long long i = a; i <= b; i++) {
            if (t_prime(i)) cnt++;
        }
        cout << cnt << endl;
    }
}