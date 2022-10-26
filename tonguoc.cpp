#include <bits/stdc++.h>

using namespace std;

long long sum (long long n) {
    long long sum = 0;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            sum += i;
            sum += n / i;
        }
    }
    return sum;
}

int main () {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        cout << sum(n) << endl;
    }
}