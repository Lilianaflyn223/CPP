#include <bits/stdc++.h>

using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int cnt = 0;
        if (n % 2 != 0) {
            cout << "0" << endl;
            continue;
        }
        for (int i = 2; i * i <= n; i += 2) {
            if (n % i == 0) {
                cnt++;
                if ((n / i) % 2 == 0) {
                    cnt++;
                }
            }
        }
        cout << cnt + 1 << endl;
    }
}