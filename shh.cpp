#include <bits/stdc++.h>

using namespace std;

bool nt(long long n) {
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return n > 1;
}

bool hh (long long n) {
    for (int p = 1; p <= 32; p++) {
        if (nt(p)) {
            long long tmp = (long long) pow (2, p) - 1;
            if (nt(tmp)){
                long long a = (long long) pow (2, p - 1) * tmp;
                if (a == n) return true;
            }
        }
    }
    return false;
}

int main () {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        if (hh(n)) cout << "1\n";
        else cout << "0\n";
    }
}