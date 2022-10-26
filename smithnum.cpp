#include <bits/stdc++.h>

using namespace std;

int sum(int n) {
    int s = 0;
    while (n) {
        s += n % 10;
        n /= 10;
    }
    return s;
}

bool Smith (int n) {
    int tmp = n;
    int sum1 = sum(n);
    int sum2 = 0;
    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            sum2 += sum(i);
            n /= i;
        }
    }
    if (tmp == n) return false;
    if (n != 1) sum2 += sum(n);
    return sum2 == sum1;
}

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (Smith(n)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}